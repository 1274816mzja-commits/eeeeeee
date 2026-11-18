<mxfile host = "app.diagrams.net">
<diagram name = "第 1 页" id = "yQ5UDNGC7Rp17BHVIaLa">
<mxGraphModel dx = "4876" dy = "2369" grid = "1" gridSize = "10" guides = "1" tooltips = "1" connect = "1" arrows = "1" fold = "1" page = "1" pageScale = "1" pageWidth = "827" pageHeight = "1169" math = "0" shadow = "0">
<root>
<mxCell id = "0" / >
<mxCell id = "1" parent = "0" / >
<mxCell id = "title" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;text;strokeColor=none;fillColor=none;fontSize=28;align=left;" value = "&lt;b&gt;Question 3B — Pokémon Battle Flowchart&lt;/b&gt;" vertex = "1">
<mxGeometry height = "55" width = "1250" x = "40" y = "10" as = "geometry" / >
< / mxCell>
<mxCell id = "start" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=50;fillColor=#d5e8d4;" value = "Start battle" vertex = "1">
<mxGeometry height = "50" width = "170" x = "555" y = "90" as = "geometry" / >
< / mxCell>
<mxCell id = "init" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Friendly and enemy trainers send out&lt;br&gt;the first Pokémon of their teams" vertex = "1">
<mxGeometry height = "80" width = "380" x = "450" y = "190" as = "geometry" / >
< / mxCell>
<mxCell id = "choose" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Both trainers choose an action:&lt;br&gt;A: Attack · B: Potion · C: Switch" vertex = "1">
<mxGeometry height = "80" width = "380" x = "450" y = "320" as = "geometry" / >
< / mxCell>
<mxCell id = "targets" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Potion: select an allied Pokémon to heal.&lt;br&gt;Switch: select a living replacement.&lt;br&gt;Attack: select a move." vertex = "1">
<mxGeometry height = "100" width = "380" x = "450" y = "450" as = "geometry" / >
< / mxCell>
<mxCell id = "count" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "How many trainers&lt;br&gt;chose Attack?" vertex = "1">
<mxGeometry height = "110" width = "350" x = "465" y = "600" as = "geometry" / >
< / mxCell>
<mxCell id = "q0" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "0 attacks&lt;br&gt;Queue both potion/switch actions;&lt;br&gt;either sequential order is valid." vertex = "1">
<mxGeometry height = "100" width = "350" x = "40" y = "780" as = "geometry" / >
< / mxCell>
<mxCell id = "q1" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "1 attack&lt;br&gt;Queue potion/switch FIRST,&lt;br&gt;then the opponent’s attack." vertex = "1">
<mxGeometry height = "100" width = "350" x = "465" y = "780" as = "geometry" / >
< / mxCell>
<mxCell id = "q2" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "2 attacks&lt;br&gt;Queue attacks by Pokémon speed:&lt;br&gt;faster first, slower second." vertex = "1">
<mxGeometry height = "100" width = "350" x = "890" y = "780" as = "geometry" / >
< / mxCell>
<mxCell id = "pending" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Any pending&lt;br&gt;actions?" vertex = "1">
<mxGeometry height = "110" width = "350" x = "465" y = "980" as = "geometry" / >
< / mxCell>
<mxCell id = "execute" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Pop and execute next action:&lt;br&gt;attack current enemy / heal selected ally /&lt;br&gt;switch active Pokémon." vertex = "1">
<mxGeometry height = "100" width = "380" x = "450" y = "1160" as = "geometry" / >
< / mxCell>
<mxCell id = "attacked" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Was this action&lt;br&gt;an attack?" vertex = "1">
<mxGeometry height = "110" width = "350" x = "465" y = "1320" as = "geometry" / >
< / mxCell>
<mxCell id = "held" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Update the attacking Pokémon’s&lt;br&gt;held item (after-attack effect)." vertex = "1">
<mxGeometry height = "80" width = "380" x = "450" y = "1500" as = "geometry" / >
< / mxCell>
<mxCell id = "resolve" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;shape=process;fillColor=#e1d5e7;" value = "Resolve fainted Pokémon&lt;br&gt;(subprocess at right)" vertex = "1">
<mxGeometry height = "80" width = "380" x = "450" y = "1650" as = "geometry" / >
< / mxCell>
<mxCell id = "ended" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Battle over?" vertex = "1">
<mxGeometry height = "100" width = "350" x = "465" y = "1800" as = "geometry" / >
< / mxCell>
<mxCell id = "end" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=50;fillColor=#d5e8d4;" value = "End battle / announce result" vertex = "1">
<mxGeometry height = "65" width = "340" x = "960" y = "1840" as = "geometry" / >
< / mxCell>
<mxCell id = "enditems" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Apply held-item effects&lt;br&gt;triggered at end of turn." vertex = "1">
<mxGeometry height = "80" width = "340" x = "1000" y = "1000" as = "geometry" / >
< / mxCell>
<mxCell id = "mapfx" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Apply end-of-turn map effects&lt;br&gt;to active Pokémon." vertex = "1">
<mxGeometry height = "80" width = "340" x = "1000" y = "1160" as = "geometry" / >
< / mxCell>
<mxCell id = "endresolve" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;shape=process;fillColor=#e1d5e7;" value = "Resolve fainted Pokémon&lt;br&gt;(same subprocess)" vertex = "1">
<mxGeometry height = "80" width = "340" x = "1000" y = "1320" as = "geometry" / >
< / mxCell>
<mxCell id = "endcheck" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Battle over?" vertex = "1">
<mxGeometry height = "100" width = "340" x = "1000" y = "1480" as = "geometry" / >
< / mxCell>
<mxCell id = "next" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Start next turn" vertex = "1">
<mxGeometry height = "65" width = "340" x = "1000" y = "1670" as = "geometry" / >
< / mxCell>
<mxCell id = "subTitle" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;text;strokeColor=none;fillColor=none;fontSize=23;" value = "&lt;b&gt;Subprocess: Resolve fainted Pokémon&lt;/b&gt;" vertex = "1">
<mxGeometry height = "70" width = "550" x = "1480" y = "190" as = "geometry" / >
< / mxCell>
<mxCell id = "rs" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=50;fillColor=#d5e8d4;" value = "Enter subprocess" vertex = "1">
<mxGeometry height = "60" width = "220" x = "1645" y = "320" as = "geometry" / >
< / mxCell>
<mxCell id = "fainted" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Any active Pokémon&lt;br&gt;with Health ≤ 0?" vertex = "1">
<mxGeometry height = "115" width = "370" x = "1570" y = "450" as = "geometry" / >
< / mxCell>
<mxCell id = "defeat" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rhombus;fillColor=#fff2cc;" value = "Does either team have&lt;br&gt;no living Pokémon left?" vertex = "1">
<mxGeometry height = "115" width = "370" x = "1570" y = "660" as = "geometry" / >
< / mxCell>
<mxCell id = "cancel" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Cancel the fainted Pokémon’s&lt;br&gt;pending attack, if any.&lt;br&gt;Its replacement does NOT inherit the action." vertex = "1">
<mxGeometry height = "100" width = "470" x = "1520" y = "870" as = "geometry" / >
< / mxCell>
<mxCell id = "replace" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Affected trainer must send out&lt;br&gt;a living Pokémon from their team.&lt;br&gt;Repeat for any other fainted active Pokémon." vertex = "1">
<mxGeometry height = "110" width = "470" x = "1520" y = "1040" as = "geometry" / >
< / mxCell>
<mxCell id = "result" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=0;fillColor=#dae8fc;" value = "Set battleOver = true.&lt;br&gt;Declare the surviving team the winner.&lt;br&gt;If neither survives: draw." vertex = "1">
<mxGeometry height = "110" width = "360" x = "2050" y = "670" as = "geometry" / >
< / mxCell>
<mxCell id = "ret" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=50;fillColor=#d5e8d4;" value = "Return to caller" vertex = "1">
<mxGeometry height = "65" width = "300" x = "2080" y = "1060" as = "geometry" / >
< / mxCell>
<mxCell id = "notes" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;shape=note;fillColor=#fff2cc;align=left;spacing=18;" value = "&lt;b&gt;Battle rules&lt;/b&gt;&lt;br&gt;• Each team: 1 trainer, 1–6 Pokémon and healing potions.&lt;br&gt;• Each Pokémon may hold one item.&lt;br&gt;• A fainted Pokémon cannot perform its queued attack,&lt;br&gt;  even when a replacement is sent out.&lt;br&gt;• Speed ties: use an arbitrary consistent tie-break.&lt;br&gt;• B/C follow the action list in the question:&lt;br&gt;  B = potion; C = switch (later text reverses the letters)." vertex = "1">
<mxGeometry height = "260" width = "850" x = "1510" y = "1350" as = "geometry" / >
< / mxCell>
<mxCell id = "a" edge = "1" parent = "1" source = "start" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "init" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "b" edge = "1" parent = "1" source = "init" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "choose" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "c" edge = "1" parent = "1" source = "choose" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "targets" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "d" edge = "1" parent = "1" source = "targets" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "count" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "e0" edge = "1" parent = "1" source = "count" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.5;entryX=0.5;entryY=0;" target = "q0" value = "0">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "215" y = "655" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "e1" edge = "1" parent = "1" source = "count" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" target = "q1" value = "1">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "e2" edge = "1" parent = "1" source = "count" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=0.5;entryY=0;" target = "q2" value = "2">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1065" y = "655" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "m0" edge = "1" parent = "1" source = "q0" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" target = "pending" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "215" y = "930" / >
<mxPoint x = "640" y = "930" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "m1" edge = "1" parent = "1" source = "q1" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "pending" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "m2" edge = "1" parent = "1" source = "q2" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" target = "pending" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1065" y = "930" / >
<mxPoint x = "640" y = "930" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "yesq" edge = "1" parent = "1" source = "pending" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "execute" value = "Yes">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "noq" edge = "1" parent = "1" source = "pending" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=0;entryY=0.5;" target = "enditems" value = "No">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ea" edge = "1" parent = "1" source = "execute" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "attacked" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ya" edge = "1" parent = "1" source = "attacked" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "held" value = "Yes">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "na" edge = "1" parent = "1" source = "attacked" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.5;entryX=0;entryY=0.5;" target = "resolve" value = "No">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "350" y = "1375" / >
<mxPoint x = "350" y = "1690" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "hr" edge = "1" parent = "1" source = "held" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "resolve" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "re" edge = "1" parent = "1" source = "resolve" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "ended" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "endyes" edge = "1" parent = "1" source = "ended" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=0;entryY=0.5;" target = "end" value = "Yes">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "endno" edge = "1" parent = "1" source = "ended" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.5;entryX=0;entryY=0.5;" target = "pending" value = "No — next pending action">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "100" y = "1850" / >
<mxPoint x = "100" y = "1035" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "ei" edge = "1" parent = "1" source = "enditems" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "mapfx" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ef" edge = "1" parent = "1" source = "mapfx" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "endresolve" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ec" edge = "1" parent = "1" source = "endresolve" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "endcheck" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ecy" edge = "1" parent = "1" source = "endcheck" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=1;entryY=0.5;" target = "end" value = "Yes">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1400" y = "1530" / >
<mxPoint x = "1400" y = "1872" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "ecn" edge = "1" parent = "1" source = "endcheck" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "next" value = "No">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "loop" edge = "1" parent = "1" source = "next" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=1;entryY=0.5;" target = "choose" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1450" y = "1702" / >
<mxPoint x = "1450" y = "360" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "rsf" edge = "1" parent = "1" source = "rs" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "fainted" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "fy" edge = "1" parent = "1" source = "fainted" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "defeat" value = "Yes">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "fn" edge = "1" parent = "1" source = "fainted" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=1;entryY=0.5;" target = "ret" value = "No">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "2460" y = "507" / >
<mxPoint x = "2460" y = "1092" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "dy" edge = "1" parent = "1" source = "defeat" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=0;entryY=0.5;" target = "result" value = "Yes">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "dn" edge = "1" parent = "1" source = "defeat" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "cancel" value = "No">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "cr" edge = "1" parent = "1" source = "cancel" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "replace" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "rf" edge = "1" parent = "1" source = "replace" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.5;entryX=0;entryY=0.5;" target = "fainted" value = "Check remaining active Pokémon">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1490" y = "1095" / >
<mxPoint x = "1490" y = "507" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "rr" edge = "1" parent = "1" source = "result" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;" target = "ret" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
< / root>
< / mxGraphModel>
< / diagram>
< / mxfile>
