<mxfile host = "app.diagrams.net">
<diagram name = "第 1 页" id = "pY24xxH7swsP2EFcal2F">
<mxGraphModel dx = "2209" dy = "1161" grid = "1" gridSize = "10" guides = "1" tooltips = "1" connect = "1" arrows = "1" fold = "1" page = "1" pageScale = "1" pageWidth = "827" pageHeight = "1169" math = "0" shadow = "0">
<root>
<mxCell id = "0" / >
<mxCell id = "1" parent = "0" / >
<mxCell id = "title" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;text;strokeColor=none;fillColor=none;fontSize=25;align=left;" value = "&lt;b&gt;Question 3A — Pokémon Emerald: Game State Diagram&lt;/b&gt;" vertex = "1">
<mxGeometry height = "50" width = "1100" x = "40" y = "10" as = "geometry" / >
< / mxCell>
<mxCell id = "start" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;ellipse;fillColor=#222222;" value = "" vertex = "1">
<mxGeometry height = "28" width = "28" x = "180" y = "110" as = "geometry" / >
< / mxCell>
<mxCell id = "menu" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=15;fillColor=#dae8fc;" value = "Main Menu" vertex = "1">
<mxGeometry height = "95" width = "240" x = "90" y = "210" as = "geometry" / >
< / mxCell>
<mxCell id = "map" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=15;fillColor=#dae8fc;" value = "Map Exploration&lt;br&gt;(top-down navigation)" vertex = "1">
<mxGeometry height = "95" width = "330" x = "520" y = "210" as = "geometry" / >
< / mxCell>
<mxCell id = "battle" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=15;fillColor=#dae8fc;" value = "Battle" vertex = "1">
<mxGeometry height = "95" width = "330" x = "520" y = "500" as = "geometry" / >
< / mxCell>
<mxCell id = "manage" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;rounded=1;arcSize=15;fillColor=#dae8fc;" value = "Team &amp;amp; Items Menu" vertex = "1">
<mxGeometry height = "95" width = "330" x = "520" y = "740" as = "geometry" / >
< / mxCell>
<mxCell id = "end" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;ellipse;fillColor=#ffffff;" value = "" vertex = "1">
<mxGeometry height = "32" width = "32" x = "180" y = "810" as = "geometry" / >
< / mxCell>
<mxCell id = "s" edge = "1" parent = "1" source = "start" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.5;exitY=1;entryX=0.44;entryY=0;" target = "menu" value = "Launch game">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "load" edge = "1" parent = "1" source = "menu" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.5;entryX=0;entryY=0.5;" target = "map" value = "Select saved game / load">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "grass" edge = "1" parent = "1" source = "map" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.3;exitY=1;entryX=0.3;entryY=0;" target = "battle" value = "Tall grass&lt;br&gt;[encounter]">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "trainer" edge = "1" parent = "1" source = "map" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.7;entryX=1;entryY=0.3;" target = "battle" value = "Meet a trainer">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1000" y = "276" / >
<mxPoint x = "1000" y = "529" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "back" edge = "1" parent = "1" source = "battle" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.7;exitY=0;entryX=0.7;entryY=1;" target = "map" value = "Battle finished">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "open" edge = "1" parent = "1" source = "map" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.8;entryX=0;entryY=0.3;" target = "manage" value = "Open menu">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "420" y = "286" / >
<mxPoint x = "420" y = "768" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "close" edge = "1" parent = "1" source = "manage" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=1;exitY=0.3;entryX=1;entryY=0.15;" target = "map" value = "Close menu / resume">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1120" y = "768" / >
<mxPoint x = "1120" y = "224" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "main" edge = "1" parent = "1" source = "manage" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.7;entryX=1;entryY=0.85;" target = "menu" value = "Return to main menu">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "370" y = "806" / >
<mxPoint x = "370" y = "291" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "exit1" edge = "1" parent = "1" source = "menu" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0;exitY=0.8;entryX=0;entryY=0.5;" target = "end" value = "Quit game">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "50" y = "286" / >
<mxPoint x = "50" y = "826" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "exit2" edge = "1" parent = "1" source = "manage" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=open;endFill=0;strokeColor=#333333;strokeWidth=1.5;fontSize=15;labelBackgroundColor=#ffffff;exitX=0.3;exitY=1;entryX=1;entryY=0.5;" target = "end" value = "Quit game">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "619" y = "910" / >
<mxPoint x = "250" y = "910" / >
<mxPoint x = "250" y = "826" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "endInner" parent = "1" style = "html=1;whiteSpace=wrap;fontFamily=Arial;fontSize=17;strokeColor=#333333;strokeWidth=1.5;spacing=10;ellipse;fillColor=#222222;strokeColor=#222222;" value = "" vertex = "1">
<mxGeometry height = "20" width = "20" x = "186" y = "816" as = "geometry" / >
< / mxCell>
< / root>
< / mxGraphModel>
< / diagram>
< / mxfile>
