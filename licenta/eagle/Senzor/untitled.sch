<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="8.7.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="photo-elements" urn="urn:adsk.eagle:library:323">
<description>&lt;b&gt;Photocells&lt;/b&gt;&lt;p&gt;
Manufakturer: PerkinElmer Optoelektronics&lt;br&gt;
www.perkinelmer.com/opto</description>
<packages>
<package name="VT900" urn="urn:adsk.eagle:footprint:22195/1" library_version="1">
<description>&lt;b&gt;Photoconductive Cell&lt;/b&gt; VT900 Series&lt;p&gt;
Source: http://optoelectronics.perkinelmer.com/content/Datasheets/DTS_vt900seriesdatasheet.pdf</description>
<wire x1="-1.2" y1="1.975" x2="1.2" y2="1.975" width="0.2032" layer="21"/>
<wire x1="1.2" y1="-1.975" x2="-1.2" y2="-1.975" width="0.2032" layer="21"/>
<wire x1="-1.2" y1="-1.975" x2="-1.225" y2="1.975" width="0.2032" layer="21" curve="-116.381221"/>
<wire x1="1.2" y1="1.975" x2="1.225" y2="-1.975" width="0.2032" layer="21" curve="-116.381221"/>
<wire x1="-1" y1="1.6" x2="0.8" y2="1.6" width="0.1016" layer="21"/>
<wire x1="0.8" y1="1.6" x2="0.8" y2="1.2" width="0.1016" layer="21" curve="-180"/>
<wire x1="0.8" y1="1.2" x2="-0.6" y2="1.2" width="0.1016" layer="21"/>
<wire x1="-0.6" y1="1.2" x2="-0.6" y2="0.8" width="0.1016" layer="21" curve="180"/>
<wire x1="-0.6" y1="0.8" x2="0.4" y2="0.8" width="0.1016" layer="21"/>
<wire x1="0.4" y1="0.8" x2="0.4" y2="0.4" width="0.1016" layer="21" curve="-180"/>
<wire x1="0.4" y1="0.4" x2="-0.2" y2="0.4" width="0.1016" layer="21"/>
<wire x1="-0.2" y1="0.4" x2="-0.2" y2="0" width="0.1016" layer="21" curve="180"/>
<wire x1="-0.2" y1="0" x2="0.2" y2="0" width="0.1016" layer="21"/>
<wire x1="0.2" y1="0" x2="0.2" y2="-0.4" width="0.1016" layer="21" curve="-180"/>
<wire x1="0.2" y1="-0.4" x2="-0.4" y2="-0.4" width="0.1016" layer="21"/>
<wire x1="-0.4" y1="-0.4" x2="-0.4" y2="-0.8" width="0.1016" layer="21" curve="180"/>
<wire x1="-0.4" y1="-0.8" x2="0.6" y2="-0.8" width="0.1016" layer="21"/>
<wire x1="0.6" y1="-0.8" x2="0.6" y2="-1.2" width="0.1016" layer="21" curve="-180"/>
<wire x1="0.6" y1="-1.2" x2="-1" y2="-1.2" width="0.1016" layer="21"/>
<wire x1="-1" y1="-1.2" x2="-1" y2="-1.6" width="0.1016" layer="21" curve="180"/>
<wire x1="-1" y1="-1.6" x2="1" y2="-1.6" width="0.1016" layer="21"/>
<wire x1="1" y1="-1.6" x2="1.2" y2="-1.8" width="0.1016" layer="21" curve="-90"/>
<wire x1="-1" y1="1.6" x2="-1.2" y2="1.8" width="0.1016" layer="21" curve="-90"/>
<pad name="1" x="-1.27" y="0" drill="0.8" diameter="1.4"/>
<pad name="2" x="1.27" y="0" drill="0.8" diameter="1.4"/>
<text x="-2.54" y="-3.81" size="1.27" layer="25">&gt;NAME</text>
<text x="-2.54" y="2.54" size="1.27" layer="27">&gt;VALUE</text>
</package>
</packages>
<packages3d>
<package3d name="VT900" urn="urn:adsk.eagle:package:22209/1" type="box" library_version="1">
<description>Photoconductive Cell VT900 Series
Source: http://optoelectronics.perkinelmer.com/content/Datasheets/DTS_vt900seriesdatasheet.pdf</description>
<packageinstances>
<packageinstance name="VT900"/>
</packageinstances>
</package3d>
</packages3d>
<symbols>
<symbol name="PHOTOCELL" urn="urn:adsk.eagle:symbol:22178/1" library_version="1">
<wire x1="-3.048" y1="2.413" x2="-1.651" y2="1.016" width="0.1524" layer="94"/>
<wire x1="-3.175" y1="1.27" x2="-1.778" y2="-0.127" width="0.1524" layer="94"/>
<wire x1="0" y1="-2.54" x2="-1.016" y2="-1.905" width="0.254" layer="94"/>
<wire x1="1.016" y1="-1.143" x2="-1.016" y2="-0.381" width="0.254" layer="94"/>
<wire x1="-1.016" y1="-0.381" x2="1.016" y2="0.381" width="0.254" layer="94"/>
<wire x1="1.016" y1="0.381" x2="-1.016" y2="1.143" width="0.254" layer="94"/>
<wire x1="-1.016" y1="1.143" x2="1.016" y2="1.905" width="0.254" layer="94"/>
<wire x1="0" y1="2.54" x2="1.016" y2="1.905" width="0.254" layer="94"/>
<wire x1="-1.016" y1="-1.905" x2="1.016" y2="-1.143" width="0.254" layer="94"/>
<text x="2.54" y="0" size="1.778" layer="95">&gt;NAME</text>
<text x="2.54" y="-2.54" size="1.778" layer="96">&gt;VALUE</text>
<pin name="1" x="0" y="5.08" visible="off" length="short" direction="pas" swaplevel="1" rot="R270"/>
<pin name="2" x="0" y="-5.08" visible="off" length="short" direction="pas" swaplevel="1" rot="R90"/>
<polygon width="0.1524" layer="94">
<vertex x="-1.778" y="-0.127"/>
<vertex x="-2.667" y="0.254"/>
<vertex x="-2.159" y="0.762"/>
</polygon>
<polygon width="0.1524" layer="94">
<vertex x="-1.651" y="1.016"/>
<vertex x="-2.54" y="1.397"/>
<vertex x="-2.032" y="1.905"/>
</polygon>
</symbol>
</symbols>
<devicesets>
<deviceset name="VT9" urn="urn:adsk.eagle:component:22218/1" prefix="OPH" library_version="1">
<description>&lt;b&gt;Photoconductive Cell&lt;/b&gt; VT900 Series&lt;p&gt;
Source: http://optoelectronics.perkinelmer.com/content/Datasheets/DTS_vt900seriesdatasheet.pdf</description>
<gates>
<gate name="G$1" symbol="PHOTOCELL" x="-2.54" y="0" swaplevel="1"/>
</gates>
<devices>
<device name="" package="VT900">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:22209/1"/>
</package3dinstances>
<technologies>
<technology name="0N1"/>
<technology name="0N2"/>
<technology name="0N3"/>
<technology name="0N4"/>
<technology name="35GA"/>
<technology name="35GB"/>
<technology name="35GC"/>
<technology name="3N1"/>
<technology name="3N2"/>
<technology name="3N3"/>
<technology name="3N4"/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="pinhead" urn="urn:adsk.eagle:library:325">
<description>&lt;b&gt;Pin Header Connectors&lt;/b&gt;&lt;p&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
<package name="1X02" urn="urn:adsk.eagle:footprint:22309/1" library_version="3">
<description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description>
<wire x1="-1.905" y1="1.27" x2="-0.635" y2="1.27" width="0.1524" layer="21"/>
<wire x1="-0.635" y1="1.27" x2="0" y2="0.635" width="0.1524" layer="21"/>
<wire x1="0" y1="0.635" x2="0" y2="-0.635" width="0.1524" layer="21"/>
<wire x1="0" y1="-0.635" x2="-0.635" y2="-1.27" width="0.1524" layer="21"/>
<wire x1="-2.54" y1="0.635" x2="-2.54" y2="-0.635" width="0.1524" layer="21"/>
<wire x1="-1.905" y1="1.27" x2="-2.54" y2="0.635" width="0.1524" layer="21"/>
<wire x1="-2.54" y1="-0.635" x2="-1.905" y2="-1.27" width="0.1524" layer="21"/>
<wire x1="-0.635" y1="-1.27" x2="-1.905" y2="-1.27" width="0.1524" layer="21"/>
<wire x1="0" y1="0.635" x2="0.635" y2="1.27" width="0.1524" layer="21"/>
<wire x1="0.635" y1="1.27" x2="1.905" y2="1.27" width="0.1524" layer="21"/>
<wire x1="1.905" y1="1.27" x2="2.54" y2="0.635" width="0.1524" layer="21"/>
<wire x1="2.54" y1="0.635" x2="2.54" y2="-0.635" width="0.1524" layer="21"/>
<wire x1="2.54" y1="-0.635" x2="1.905" y2="-1.27" width="0.1524" layer="21"/>
<wire x1="1.905" y1="-1.27" x2="0.635" y2="-1.27" width="0.1524" layer="21"/>
<wire x1="0.635" y1="-1.27" x2="0" y2="-0.635" width="0.1524" layer="21"/>
<pad name="1" x="-1.27" y="0" drill="1.016" shape="long" rot="R90"/>
<pad name="2" x="1.27" y="0" drill="1.016" shape="long" rot="R90"/>
<text x="-2.6162" y="1.8288" size="1.27" layer="25" ratio="10">&gt;NAME</text>
<text x="-2.54" y="-3.175" size="1.27" layer="27">&gt;VALUE</text>
<rectangle x1="-1.524" y1="-0.254" x2="-1.016" y2="0.254" layer="51"/>
<rectangle x1="1.016" y1="-0.254" x2="1.524" y2="0.254" layer="51"/>
</package>
<package name="1X02/90" urn="urn:adsk.eagle:footprint:22310/1" library_version="3">
<description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description>
<wire x1="-2.54" y1="-1.905" x2="0" y2="-1.905" width="0.1524" layer="21"/>
<wire x1="0" y1="-1.905" x2="0" y2="0.635" width="0.1524" layer="21"/>
<wire x1="0" y1="0.635" x2="-2.54" y2="0.635" width="0.1524" layer="21"/>
<wire x1="-2.54" y1="0.635" x2="-2.54" y2="-1.905" width="0.1524" layer="21"/>
<wire x1="-1.27" y1="6.985" x2="-1.27" y2="1.27" width="0.762" layer="21"/>
<wire x1="0" y1="-1.905" x2="2.54" y2="-1.905" width="0.1524" layer="21"/>
<wire x1="2.54" y1="-1.905" x2="2.54" y2="0.635" width="0.1524" layer="21"/>
<wire x1="2.54" y1="0.635" x2="0" y2="0.635" width="0.1524" layer="21"/>
<wire x1="1.27" y1="6.985" x2="1.27" y2="1.27" width="0.762" layer="21"/>
<pad name="1" x="-1.27" y="-3.81" drill="1.016" shape="long" rot="R90"/>
<pad name="2" x="1.27" y="-3.81" drill="1.016" shape="long" rot="R90"/>
<text x="-3.175" y="-3.81" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
<text x="4.445" y="-3.81" size="1.27" layer="27" rot="R90">&gt;VALUE</text>
<rectangle x1="-1.651" y1="0.635" x2="-0.889" y2="1.143" layer="21"/>
<rectangle x1="0.889" y1="0.635" x2="1.651" y2="1.143" layer="21"/>
<rectangle x1="-1.651" y1="-2.921" x2="-0.889" y2="-1.905" layer="21"/>
<rectangle x1="0.889" y1="-2.921" x2="1.651" y2="-1.905" layer="21"/>
</package>
</packages>
<packages3d>
<package3d name="1X02" urn="urn:adsk.eagle:package:22435/2" type="model" library_version="3">
<description>PIN HEADER</description>
<packageinstances>
<packageinstance name="1X02"/>
</packageinstances>
</package3d>
<package3d name="1X02/90" urn="urn:adsk.eagle:package:22437/2" type="model" library_version="3">
<description>PIN HEADER</description>
<packageinstances>
<packageinstance name="1X02/90"/>
</packageinstances>
</package3d>
</packages3d>
<symbols>
<symbol name="PINHD2" urn="urn:adsk.eagle:symbol:22308/1" library_version="3">
<wire x1="-6.35" y1="-2.54" x2="1.27" y2="-2.54" width="0.4064" layer="94"/>
<wire x1="1.27" y1="-2.54" x2="1.27" y2="5.08" width="0.4064" layer="94"/>
<wire x1="1.27" y1="5.08" x2="-6.35" y2="5.08" width="0.4064" layer="94"/>
<wire x1="-6.35" y1="5.08" x2="-6.35" y2="-2.54" width="0.4064" layer="94"/>
<text x="-6.35" y="5.715" size="1.778" layer="95">&gt;NAME</text>
<text x="-6.35" y="-5.08" size="1.778" layer="96">&gt;VALUE</text>
<pin name="1" x="-2.54" y="2.54" visible="pad" length="short" direction="pas" function="dot"/>
<pin name="2" x="-2.54" y="0" visible="pad" length="short" direction="pas" function="dot"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="PINHD-1X2" urn="urn:adsk.eagle:component:22516/3" prefix="JP" uservalue="yes" library_version="3">
<description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description>
<gates>
<gate name="G$1" symbol="PINHD2" x="0" y="0"/>
</gates>
<devices>
<device name="" package="1X02">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:22435/2"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
<device name="/90" package="1X02/90">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:22437/2"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="OPH1" library="photo-elements" library_urn="urn:adsk.eagle:library:323" deviceset="VT9" device="" package3d_urn="urn:adsk.eagle:package:22209/1" technology="0N1"/>
<part name="JP1" library="pinhead" library_urn="urn:adsk.eagle:library:325" deviceset="PINHD-1X2" device="" package3d_urn="urn:adsk.eagle:package:22435/2"/>
<part name="OPH2" library="photo-elements" library_urn="urn:adsk.eagle:library:323" deviceset="VT9" device="" package3d_urn="urn:adsk.eagle:package:22209/1" technology="0N1"/>
<part name="JP2" library="pinhead" library_urn="urn:adsk.eagle:library:325" deviceset="PINHD-1X2" device="" package3d_urn="urn:adsk.eagle:package:22435/2"/>
<part name="OPH3" library="photo-elements" library_urn="urn:adsk.eagle:library:323" deviceset="VT9" device="" package3d_urn="urn:adsk.eagle:package:22209/1" technology="0N1"/>
<part name="JP3" library="pinhead" library_urn="urn:adsk.eagle:library:325" deviceset="PINHD-1X2" device="" package3d_urn="urn:adsk.eagle:package:22435/2"/>
<part name="OPH4" library="photo-elements" library_urn="urn:adsk.eagle:library:323" deviceset="VT9" device="" package3d_urn="urn:adsk.eagle:package:22209/1" technology="0N1"/>
<part name="JP4" library="pinhead" library_urn="urn:adsk.eagle:library:325" deviceset="PINHD-1X2" device="" package3d_urn="urn:adsk.eagle:package:22435/2"/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="OPH1" gate="G$1" x="20.32" y="106.68"/>
<instance part="JP1" gate="G$1" x="5.08" y="106.68" rot="R180"/>
<instance part="OPH2" gate="G$1" x="48.26" y="106.68"/>
<instance part="JP2" gate="G$1" x="33.02" y="106.68" rot="R180"/>
<instance part="OPH3" gate="G$1" x="20.32" y="86.36"/>
<instance part="JP3" gate="G$1" x="5.08" y="86.36" rot="R180"/>
<instance part="OPH4" gate="G$1" x="48.26" y="86.36"/>
<instance part="JP4" gate="G$1" x="33.02" y="86.36" rot="R180"/>
</instances>
<busses>
</busses>
<nets>
<net name="N$1" class="0">
<segment>
<pinref part="JP1" gate="G$1" pin="2"/>
<wire x1="7.62" y1="106.68" x2="15.24" y2="106.68" width="0.1524" layer="91"/>
<wire x1="15.24" y1="106.68" x2="15.24" y2="114.3" width="0.1524" layer="91"/>
<pinref part="OPH1" gate="G$1" pin="1"/>
<wire x1="15.24" y1="114.3" x2="20.32" y2="114.3" width="0.1524" layer="91"/>
<wire x1="20.32" y1="114.3" x2="20.32" y2="111.76" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$2" class="0">
<segment>
<pinref part="JP1" gate="G$1" pin="1"/>
<wire x1="7.62" y1="104.14" x2="15.24" y2="104.14" width="0.1524" layer="91"/>
<wire x1="15.24" y1="104.14" x2="15.24" y2="99.06" width="0.1524" layer="91"/>
<pinref part="OPH1" gate="G$1" pin="2"/>
<wire x1="15.24" y1="99.06" x2="20.32" y2="99.06" width="0.1524" layer="91"/>
<wire x1="20.32" y1="99.06" x2="20.32" y2="101.6" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$3" class="0">
<segment>
<pinref part="JP2" gate="G$1" pin="2"/>
<wire x1="35.56" y1="106.68" x2="43.18" y2="106.68" width="0.1524" layer="91"/>
<wire x1="43.18" y1="106.68" x2="43.18" y2="114.3" width="0.1524" layer="91"/>
<pinref part="OPH2" gate="G$1" pin="1"/>
<wire x1="43.18" y1="114.3" x2="48.26" y2="114.3" width="0.1524" layer="91"/>
<wire x1="48.26" y1="114.3" x2="48.26" y2="111.76" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$4" class="0">
<segment>
<pinref part="JP2" gate="G$1" pin="1"/>
<wire x1="35.56" y1="104.14" x2="43.18" y2="104.14" width="0.1524" layer="91"/>
<wire x1="43.18" y1="104.14" x2="43.18" y2="99.06" width="0.1524" layer="91"/>
<pinref part="OPH2" gate="G$1" pin="2"/>
<wire x1="43.18" y1="99.06" x2="48.26" y2="99.06" width="0.1524" layer="91"/>
<wire x1="48.26" y1="99.06" x2="48.26" y2="101.6" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$5" class="0">
<segment>
<pinref part="JP3" gate="G$1" pin="2"/>
<wire x1="7.62" y1="86.36" x2="15.24" y2="86.36" width="0.1524" layer="91"/>
<wire x1="15.24" y1="86.36" x2="15.24" y2="93.98" width="0.1524" layer="91"/>
<pinref part="OPH3" gate="G$1" pin="1"/>
<wire x1="15.24" y1="93.98" x2="20.32" y2="93.98" width="0.1524" layer="91"/>
<wire x1="20.32" y1="93.98" x2="20.32" y2="91.44" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$6" class="0">
<segment>
<pinref part="JP3" gate="G$1" pin="1"/>
<wire x1="7.62" y1="83.82" x2="15.24" y2="83.82" width="0.1524" layer="91"/>
<wire x1="15.24" y1="83.82" x2="15.24" y2="78.74" width="0.1524" layer="91"/>
<pinref part="OPH3" gate="G$1" pin="2"/>
<wire x1="15.24" y1="78.74" x2="20.32" y2="78.74" width="0.1524" layer="91"/>
<wire x1="20.32" y1="78.74" x2="20.32" y2="81.28" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$7" class="0">
<segment>
<pinref part="JP4" gate="G$1" pin="2"/>
<wire x1="35.56" y1="86.36" x2="43.18" y2="86.36" width="0.1524" layer="91"/>
<wire x1="43.18" y1="86.36" x2="43.18" y2="93.98" width="0.1524" layer="91"/>
<pinref part="OPH4" gate="G$1" pin="1"/>
<wire x1="43.18" y1="93.98" x2="48.26" y2="93.98" width="0.1524" layer="91"/>
<wire x1="48.26" y1="93.98" x2="48.26" y2="91.44" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$8" class="0">
<segment>
<pinref part="JP4" gate="G$1" pin="1"/>
<wire x1="35.56" y1="83.82" x2="43.18" y2="83.82" width="0.1524" layer="91"/>
<wire x1="43.18" y1="83.82" x2="43.18" y2="78.74" width="0.1524" layer="91"/>
<pinref part="OPH4" gate="G$1" pin="2"/>
<wire x1="43.18" y1="78.74" x2="48.26" y2="78.74" width="0.1524" layer="91"/>
<wire x1="48.26" y1="78.74" x2="48.26" y2="81.28" width="0.1524" layer="91"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
<compatibility>
<note version="8.2" severity="warning">
Since Version 8.2, EAGLE supports online libraries. The ids
of those online libraries will not be understood (or retained)
with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports URNs for individual library
assets (packages, symbols, and devices). The URNs of those assets
will not be understood (or retained) with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports the association of 3D packages
with devices in libraries, schematics, and board files. Those 3D
packages will not be understood (or retained) with this version.
</note>
</compatibility>
</eagle>
