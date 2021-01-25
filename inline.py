import pprint

def print_section(sections, section):
    print('')
    print(section + ':')
    for line in sections[section]:
        if line.startswith('goto'):
            goto_target = line.split(' ')[1][:-1]
            if goto_target in single_goto_targets:
                print_section(sections, goto_target)
            else:
                print(line)
        else:
            print(line)


with open("core.c", "r") as f:
    code = f.readlines()
    code = [x.strip() for x in code]

#print(code)

section = None

sections = {}

# sort into sections

for line in code:
    if line == '':
        continue
    if line.endswith(':'):
        section = line[:-1]
        sections[section] = []
    else:
        sections[section].append(line)

#pprint.pprint(sections)

# collect all gotos

goto_targets = {}
for section in sections:
    for line in sections[section]:
        if line.startswith('goto'):
            goto_target = line.split(' ')[1][:-1]
            if goto_target in goto_targets:
                goto_targets[goto_target] += 1
            else:
                goto_targets[goto_target] = 1

#print(goto_targets)

# filter all gotos that are targeted once

single_goto_targets = []

for goto_target in goto_targets:
    if goto_targets[goto_target] == 1:
        if 'goto ' + goto_target + ';' not in sections[goto_target]: # self loop
            single_goto_targets.append(goto_target)
    
#print(single_goto_targets)

print("// Inlining {} basic blocks.".format(len(single_goto_targets)))

for section in sections:
    if section not in single_goto_targets:
        print_section(sections, section)


