<mxfile host = "app.diagrams.net">
<diagram name = "第 1 页" id = "pY24xxH7swsP2EFcal2F">
<mxGraphModel dx = "4419" dy = "2322" grid = "1" gridSize = "10" guides = "1" tooltips = "1" connect = "1" arrows = "1" fold = "1" page = "1" pageScale = "1" pageWidth = "827" pageHeight = "1169" math = "0" shadow = "0">
<root>
<mxCell id = "0" / >
<mxCell id = "1" parent = "0" / >
<mxCell id = "battle" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#dae8fc;border-bottom:1px solid #333;padding:7px;&quot;&gt;Battle&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- teams: array&amp;lt;Team*, 2&amp;gt;&lt;br&gt;- activePokemon: array&amp;lt;Pokemon*, 2&amp;gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Battle(a: Team&amp;amp;, b: Team&amp;amp;)&lt;br&gt;+ Attack(teamIndex: int, moveIndex: int): void&lt;br&gt;+ SetActive(teamIndex: int, pokemonIndex: int): void&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "165" width = "365" x = "40" y = "70" as = "geometry" / >
< / mxCell>
<mxCell id = "team" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#dae8fc;border-bottom:1px solid #333;padding:7px;&quot;&gt;Team&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- members: vector&amp;lt;Pokemon&amp;gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Team(first: Pokemon)&lt;br&gt;+ AddPokemon(pokemon: Pokemon): bool&lt;br&gt;+ GetPokemon(index: int): Pokemon&amp;amp;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "365" x = "40" y = "330" as = "geometry" / >
< / mxCell>
<mxCell id = "pokemon" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#dae8fc;border-bottom:1px solid #333;padding:7px;&quot;&gt;Pokemon&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- name: string&lt;br&gt;- stats: Stats&lt;br&gt;- moveset: vector&amp;lt;Move&amp;gt;&lt;br&gt;- statusEffects: vector&amp;lt;unique_ptr&amp;lt;StatusEffect&amp;gt;&amp;gt;&lt;br&gt;- statsModifyers: map&amp;lt;StatType, int&amp;gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Pokemon(name: string, stats: Stats, first: Move)&lt;br&gt;+ Attack(moveIndex: int, target: Pokemon&amp;amp;): void&lt;br&gt;+ AddMove(move: Move, replaceIndex: int = -1): bool&lt;br&gt;+ AddStatus(effect: unique_ptr&amp;lt;StatusEffect&amp;gt;): void&lt;br&gt;+ UpdateDebuffs(): void&lt;br&gt;+ ApplyModifier(modifier: StatModifier): void&lt;br&gt;+ ClearStatModifiers(): void&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "300" width = "450" x = "510" y = "300" as = "geometry" / >
< / mxCell>
<mxCell id = "stats" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#dae8fc;border-bottom:1px solid #333;padding:7px;&quot;&gt;Stats&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- health: int&lt;br&gt;- atk: int&lt;br&gt;- def: int&lt;br&gt;- spd: int&lt;br&gt;- spAtk: int&lt;br&gt;- spDef: int&lt;br&gt;- isFainted: bool = false&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Stats(hp: int, atk: int, def: int, spd: int,&lt;br&gt;  spAtk: int, spDef: int)&lt;br&gt;+ ReceiveDamage(amount: int): void&lt;br&gt;+ GetStat(type: StatType): int&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "285" width = "345" x = "1080" y = "300" as = "geometry" / >
< / mxCell>
<mxCell id = "move" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#dae8fc;border-bottom:1px solid #333;padding:7px;&quot;&gt;Move&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- name: string&lt;br&gt;- power: int&lt;br&gt;- powerPoints: int&lt;br&gt;- isSpecial: bool&lt;br&gt;- statusEffect: unique_ptr&amp;lt;StatusEffect&amp;gt;&lt;br&gt;- statusEffectPercentage: float&lt;br&gt;- statModifyer: optional&amp;lt;StatModifier&amp;gt;&lt;br&gt;- statModifyerPercentage: float&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Move(name: string, power: int, pp: int, special: bool)&lt;br&gt;+ Attack(attacker: Stats&amp;amp;, target: Stats&amp;amp;): void&lt;br&gt;+ ApplySecondaryEffects(target: Pokemon&amp;amp;): void&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "290" width = "450" x = "510" y = "730" as = "geometry" / >
< / mxCell>
<mxCell id = "effect" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;&amp;lt;&amp;lt;abstract&amp;gt;&amp;gt;&lt;br&gt;&lt;i&gt;StatusEffect&lt;/i&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;# name: string&lt;br&gt;# duration: int&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ StatusEffect(name: string, duration: int)&lt;br&gt;+ virtual ~StatusEffect()&lt;br&gt;+ &lt;i&gt;virtual Apply(stats: Stats&amp;amp;): void = 0&lt;/i&gt;&lt;br&gt;+ Update(stats: Stats&amp;amp;): void&lt;br&gt;+ IsExpired(): bool&lt;br&gt;+ &lt;i&gt;virtual Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; = 0&lt;/i&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "240" width = "365" x = "40" y = "730" as = "geometry" / >
< / mxCell>
<mxCell id = "modifier" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#d5e8d4;border-bottom:1px solid #333;padding:7px;&quot;&gt;StatModifier&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;- stat: StatType&lt;br&gt;- delta: int&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ StatModifier(stat: StatType, delta: int)&lt;br&gt;+ GetStat(): StatType&lt;br&gt;+ GetDelta(): int&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "150" width = "345" x = "1080" y = "770" as = "geometry" / >
< / mxCell>
<mxCell id = "stattype" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#d5e8d4;border-bottom:1px solid #333;padding:7px;&quot;&gt;&amp;lt;&amp;lt;enumeration&amp;gt;&amp;gt;&lt;br&gt;StatType&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;Health&lt;br&gt;Atk&lt;br&gt;Def&lt;br&gt;Spd&lt;br&gt;SpAtk&lt;br&gt;SpDef&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "180" width = "230" x = "1120" y = "1030" as = "geometry" / >
< / mxCell>
<mxCell id = "effect0" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;Paralized&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Paralized(duration: int)&lt;br&gt;+ Apply(stats: Stats&amp;amp;): void override&lt;br&gt;+ Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; override&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "260" x = "40" y = "1330" as = "geometry" / >
< / mxCell>
<mxCell id = "effect1" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;Poisoned&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Poisoned(duration: int)&lt;br&gt;+ Apply(stats: Stats&amp;amp;): void override&lt;br&gt;+ Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; override&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "260" x = "325" y = "1330" as = "geometry" / >
< / mxCell>
<mxCell id = "effect2" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;Sleep&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Sleep(duration: int)&lt;br&gt;+ Apply(stats: Stats&amp;amp;): void override&lt;br&gt;+ Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; override&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "260" x = "610" y = "1330" as = "geometry" / >
< / mxCell>
<mxCell id = "effect3" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;Frozen&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Frozen(duration: int)&lt;br&gt;+ Apply(stats: Stats&amp;amp;): void override&lt;br&gt;+ Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; override&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "260" x = "895" y = "1330" as = "geometry" / >
< / mxCell>
<mxCell id = "effect4" parent = "1" style = "html=1;whiteSpace=wrap;overflow=fill;fillColor=#ffffff;strokeColor=#333333;rounded=0;fontFamily=Arial;fontSize=14;" value = "&lt;table style=&quot;width:100%;height:100%;border-collapse:collapse;font-size:14px;&quot; border=&quot;0&quot;&gt;&lt;tr&gt;&lt;td style=&quot;text-align:center;font-weight:bold;background:#e1d5e7;border-bottom:1px solid #333;padding:7px;&quot;&gt;Burn&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;border-bottom:1px solid #333;padding:8px;&quot;&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td style=&quot;text-align:left;vertical-align:top;padding:8px;&quot;&gt;+ Burn(duration: int)&lt;br&gt;+ Apply(stats: Stats&amp;amp;): void override&lt;br&gt;+ Clone(): unique_ptr&amp;lt;StatusEffect&amp;gt; override&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;" vertex = "1">
<mxGeometry height = "145" width = "260" x = "1180" y = "1330" as = "geometry" / >
< / mxCell>
<mxCell id = "bteam" edge = "1" parent = "1" source = "battle" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=0;exitX=0.22;exitY=1;entryX=0.22;entryY=0;" target = "team" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "bt1" connectable = "0" parent = "bteam" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.75" y = "-15" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "bt2" connectable = "0" parent = "bteam" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "2 teams" vertex = "1">
<mxGeometry relative = "1" x = "0.6" y = "-24" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "tp" edge = "1" parent = "1" source = "team" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=1;exitX=1;exitY=0.5;entryX=0;entryY=0.34;" target = "pokemon" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "tp1" connectable = "0" parent = "tp" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.65" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "tp2" connectable = "0" parent = "tp" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1..6" vertex = "1">
<mxGeometry relative = "1" x = "0.65" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "ps" edge = "1" parent = "1" source = "pokemon" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=1;exitX=1;exitY=0.2;entryX=0;entryY=0.21;" target = "stats" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "ps1" connectable = "0" parent = "ps" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.65" y = "-13" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "ps2" connectable = "0" parent = "ps" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "0.65" y = "-13" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "pm" edge = "1" parent = "1" source = "pokemon" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" target = "move" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "pm1" connectable = "0" parent = "pm" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.7" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "pm2" connectable = "0" parent = "pm" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1..4 moveset" vertex = "1">
<mxGeometry relative = "1" x = "0.55" y = "-50" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "me" edge = "1" parent = "1" source = "move" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=1;exitX=0;exitY=0.5;entryX=1;entryY=0.6;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "me1" connectable = "0" parent = "me" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.65" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "me2" connectable = "0" parent = "me" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "0..1" vertex = "1">
<mxGeometry relative = "1" x = "0.6" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "mm" edge = "1" parent = "1" source = "move" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;startArrow=diamondThin;startFill=1;exitX=1;exitY=0.4;entryX=0;entryY=0.7;" target = "modifier" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "mm1" connectable = "0" parent = "mm" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "1" vertex = "1">
<mxGeometry relative = "1" x = "-0.65" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "mm2" connectable = "0" parent = "mm" style = "edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];fontSize=13;labelBackgroundColor=#ffffff;" value = "0..1" vertex = "1">
<mxGeometry relative = "1" x = "0.6" y = "-14" as = "geometry">
<mxPoint as = "offset" / >
< / mxGeometry>
< / mxCell>
<mxCell id = "ms" edge = "1" parent = "1" source = "move" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;dashed=1;endArrow=open;exitX=1;exitY=0.12;entryX=0.5;entryY=1;" target = "stats" value = "attacks">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1015" y = "765" / >
<mxPoint x = "1015" y = "650" / >
<mxPoint x = "1252" y = "650" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "pmod" edge = "1" parent = "1" source = "pokemon" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;dashed=1;endArrow=open;exitX=1;exitY=0.9;entryX=1;entryY=0.2;" target = "modifier" value = "uses">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1480" y = "570" / >
<mxPoint x = "1480" y = "800" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "mt" edge = "1" parent = "1" source = "modifier" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;dashed=1;endArrow=open;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" target = "stattype" value = "">
<mxGeometry relative = "1" as = "geometry" / >
< / mxCell>
<mxCell id = "inherit0" edge = "1" parent = "1" source = "effect0" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;endArrow=block;endFill=0;exitX=0.5;exitY=0;entryX=0.5;entryY=1;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "170" y = "1250" / >
<mxPoint x = "222" y = "1250" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "inherit1" edge = "1" parent = "1" source = "effect1" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;endArrow=block;endFill=0;exitX=0.5;exitY=0;entryX=0.5;entryY=1;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "455" y = "1250" / >
<mxPoint x = "222" y = "1250" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "inherit2" edge = "1" parent = "1" source = "effect2" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;endArrow=block;endFill=0;exitX=0.5;exitY=0;entryX=0.5;entryY=1;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "740" y = "1250" / >
<mxPoint x = "222" y = "1250" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "inherit3" edge = "1" parent = "1" source = "effect3" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;endArrow=block;endFill=0;exitX=0.5;exitY=0;entryX=0.5;entryY=1;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1025" y = "1250" / >
<mxPoint x = "222" y = "1250" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "inherit4" edge = "1" parent = "1" source = "effect4" style = "edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=13;labelBackgroundColor=#ffffff;strokeWidth=1.5;endArrow=none;endArrow=block;endFill=0;exitX=0.5;exitY=0;entryX=0.5;entryY=1;" target = "effect" value = "">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "1310" y = "1250" / >
<mxPoint x = "222" y = "1250" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "rules" parent = "1" style = "shape=note;whiteSpace=wrap;html=1;backgroundOutline=1;size=18;fillColor=#fff2cc;strokeColor=#d6b656;align=left;spacing=10;fontSize=14;" value = "&lt;b&gt;Constraints&lt;/b&gt;&lt;br&gt;• Team: 1 ≤ members.size() ≤ 6&lt;br&gt;• Pokemon: 1 ≤ moveset.size() ≤ 4&lt;br&gt;• AddMove: if full, replaceIndex must identify the move to remove.&lt;br&gt;• Active Pokemon defaults to members[0]." vertex = "1">
<mxGeometry height = "165" width = "450" x = "510" y = "70" as = "geometry" / >
< / mxCell>
<mxCell id = "rules2" parent = "1" style = "shape=note;whiteSpace=wrap;html=1;backgroundOutline=1;size=18;fillColor=#fff2cc;strokeColor=#d6b656;align=left;spacing=10;fontSize=14;" value = "&lt;b&gt;Stat modifiers&lt;/b&gt;&lt;br&gt;delta ∈ {−2, −1, +1, +2}&lt;br&gt;ApplyModifier: stage = clamp(stage + delta, −6, +6).&lt;br&gt;ClearStatModifiers: reset every stage to 0." vertex = "1">
<mxGeometry height = "165" width = "345" x = "1080" y = "70" as = "geometry" / >
< / mxCell>
<mxCell id = "rules3" parent = "1" style = "shape=note;whiteSpace=wrap;html=1;backgroundOutline=1;size=18;fillColor=#fff2cc;strokeColor=#d6b656;align=left;spacing=10;fontSize=14;" value = "&lt;b&gt;Behaviour&lt;/b&gt;&lt;br&gt;ReceiveDamage: health = max(0, health − amount);&lt;br&gt;if health ≤ 0, isFainted = true.&lt;br&gt;Move uses powerPoints and checks effect percentages.&lt;br&gt;StatusEffect: duration = −1 means infinite;&lt;br&gt;Update applies effect and decreases finite duration.&lt;br&gt;Pokemon removes expired effects." vertex = "1">
<mxGeometry height = "160" width = "450" x = "510" y = "1060" as = "geometry" / >
< / mxCell>
<mxCell id = "title" parent = "1" style = "text;html=1;align=left;fontSize=24;fontStyle=1;" value = "Pokémon Emerald — Simplified Combat System | Question 1" vertex = "1">
<mxGeometry height = "35" width = "1400" x = "40" y = "15" as = "geometry" / >
< / mxCell>
<mxCell id = "active" edge = "1" parent = "1" source = "battle" style = "edgeStyle=orthogonalEdgeStyle;html=1;fontSize=13;labelBackgroundColor=#ffffff;endArrow=none;exitX=1;exitY=0.8;entryX=0.3;entryY=0;" target = "pokemon" value = "activePokemon: 2 (one per team)">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "450" y = "202" / >
<mxPoint x = "450" y = "270" / >
<mxPoint x = "645" y = "270" / >
< / Array>
< / mxGeometry>
< / mxCell>
<mxCell id = "pe" edge = "1" parent = "1" source = "pokemon" style = "edgeStyle=orthogonalEdgeStyle;html=1;fontSize=13;labelBackgroundColor=#ffffff;endArrow=none;startArrow=diamondThin;startFill=1;exitX=0;exitY=0.75;entryX=0.7;entryY=0;" target = "effect" value = "1 : statusEffects : 0..*">
<mxGeometry relative = "1" as = "geometry">
<Array as = "points">
<mxPoint x = "450" y = "525" / >
<mxPoint x = "450" y = "660" / >
<mxPoint x = "295" y = "660" / >
< / Array>
< / mxGeometry>
< / mxCell>
< / root>
< / mxGraphModel>
< / diagram>
< / mxfile>
