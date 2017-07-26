//sub_2xxxxx start //

void basic_setting_ex_hostname(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@1
  int v4; // r3@1
  int v21; // r0@4
  int v23; // [sp+0h] [bp-310h]@1
  char dest; // [sp+200h] [bp-110h]@1

  v1 = a1;
  strcpy(&dest, "");
  printf("<form method=\"post\" action=\"timepro.cgi\" name=\"sysconf_fm\"> ");
  puts("<table style=\"border-collapse:collapse; border-style:none solid solid solid; border-width:0px 1px 1px 1px; border-color:#eeeeee;width:642 \" cellspacing=0px cellpadding=0px>");
  printf("<input type=hidden name=tmenu value=sysconf>");
  printf("<input type=hidden name=\"smenu\" value=\"misc\">");
  v2 = printf("<input type=hidden name=\"act\"id=act  value=\"\">");
  str("<input type=hidden name=\"act\"id=act  value=\"\">");
  printf("<td width=100%% height=%d colspan=2 style='border-bottom: 1px solid #CCC;'>", 260);
  v3 = (char *)&v23 + snprintf((char *)&v23, 0x80u, "timepro.cgi?tmenu=iframe&smenu=");
  v4 = get_pvalue(v1, "act");
  if ( v4 || (v4 = get_pvalue(v1, "service")) != 0 )
    snprintf(v3, 0x80u, "&service=%s", v4);
  printf("<iframe name=\"sysconf_misc_iframe\" src=\"%s\" frameborder=no width=100%% height=340 align=left scrolling=yes></iframe>", &v23);
  printf("</td></tr>");
  puts("<tr height=165 style=\"background-Color:#eeeeee\"><td valign=top colspan=2>");
  sub_1EDD8("multilang", sub_15A94(1020)); // v5 del
  sub_1EDD8("hostname", sub_15A94(997));
  sub_1EDD8("configmgmt", sub_15A94(657));
  sub_1EDD8("autosaving", sub_15A94(1018));
  sub_1EDD8("fakedns", sub_15A94(1019));
  sub_1EDD8("nologin", sub_15A94(1027);
  sub_1EDD8("wbmpopup", sub_15A94(1022));
  sub_1EDD8("led", sub_15A94(506));
  sub_1EDD8("ispfake", "HTTP URL Tag", 0);
  sub_1EDD8("auto", sub_15A94(56));
  sub_1EDD8("restart", sub_15A94(992));
  sub_1EDD8("apcplan", sub_15A94(988));
  sub_1EDD8("macclone_giga", sub_15A94(1031));
  sub_1EDD8("upnp", sub_15A94(1082));
  sub_1EDD8("hubapmode", sub_15A94(998));
  sub_1EDD8("realtime", sub_15A94(660));
  printf("</td></tr>");
  printf("<tr height=1px style=\"background-Color:#dddddd\"><td colspan=2></td></tr>");
  printf("<tr align=right valign=middle height=28 style=\"background-Color:#eeeeee\"><td align=right width=595>");
  printf("</td><td align=right>");
  v20 = sub_15A94(32);
  v21 = hwinfo_get_reboot_duration();
  printf("<input type=button id=apply_bt name=params_bt value=\"%s\" onclick=\"ApplySysconfig(%d);\">", v20, v21);
  printf("</td></tr>");
  printf("</table>");
  printf("</form>");
}

void setting_and_reboot(int a1)
{
  int v1; // r6@1
  int v2; // r0@1

  v1 = a1;
  sub_1CF0C();
  sub_15988("sysconf", "misc");
  printf("<style>");
  printf("form { margin: 0; }");
  printf("input[type='text'] { border: 1px solid #CCC; }");
  printf("input[type='radio'], input[type='checkbox'] { vertical-align: sub; }");
  printf("</style>");
  sub_20948(v1);
  sub_1CCC8("apply_mask", sub_15A94(31));
  sub_1CCC8("reboot_mask", sub_15A94(1024));
  printf("<style>");
  printf("#%s p { margin: 5px 0 5px 10px; text-align: left; }", "configmgmt-");
  printf("</style>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "configmgmt-");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;
    opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:200px; top:198px; width:240px; height:75px; z-index:100; background-color:#ffffff;
    opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;
     box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"240\" height=\"70\">");
  printf("<tr><td width=\"35px\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  v2 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf("<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">", sub_14BF4(v2));
  printf("</SPAN></td>");
  printf("<td height=\"100%%\" align=\"center\" valign=\"middle\"><SPAN style=\"vertical-align:middle; display:block; text-align:center;\">\n");
  printf("<p id=configmgmt_success style='line-height: 21px; height: 40px;'>");
  printf("%s<br>%s</p>", sub_15A94(938), sub_15A94(929));
  printf("<p id=configmgmt_fail>%s</p>", sub_15A94(937));
  printf("<p id='configmgmt_reboot_seconds'></p>");
  printf("</SPAN></td>");
  printf("</tr></table><DIV>");
}

void sub_20E28(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r5@6
  int v5; // r4@7
  int result; // r0@7
  signed int v7; // r0@8
  int v8; // r7@12
  int v9; // r0@12
  int v10; // r0@12
  int v11; // r5@12
  int v12; // r0@13
  int v13; // r6@15
  int v14; // r0@17
  char *v15; // r4@17
  int v16; // r0@18
  char *v17; // r4@18
  int v18; // r0@18
  int v19; // r8@18
  char *v20; // r4@18
  int v21; // r8@22
  int v22; // r0@22
  int v23; // r0@22
  char *v24; // r4@22
  int v25; // r0@22
  char *v26; // r4@22
  int v27; // r0@26
  int v28; // r0@26
  char *v29; // r4@26
  int v30; // r8@26
  int v31; // r10@26
  int v32; // r0@26
  int v33; // r0@26
  int v34; // r3@26
  int v35; // r8@26
  char *v36; // r4@26
  int v37; // r8@30
  int v38; // r0@30
  int v39; // r0@30
  char *v40; // r4@30
  int v41; // r0@30
  char *v42; // r4@30
  int v43; // r0@34
  int v44; // r0@34
  char *v45; // r4@34
  int v46; // r0@34
  char *v47; // r4@34
  char *v48; // r4@34
  int v49; // r8@34
  int v50; // r6@34
  int v51; // r0@34
  signed int v52; // r0@34
  signed int v53; // r0@37
  int v54; // r0@39
  int v55; // r0@46
  int v56; // r8@46
  int v57; // r0@48
  int v58; // r6@49
  int v59; // r0@49
  int v60; // r0@51
  int v61; // r6@51
  const char *v62; // r0@51
  int v63; // r8@52
  const char *v64; // r0@54
  char *v65; // r4@54
  int v66; // r6@54
  const char *v67; // r0@54
  const char *v68; // r0@55
  int v69; // r6@56
  const char *v70; // r0@56
  const char *v71; // r0@57
  char dest[512]; // [sp+8h] [bp-500h]@17
  char v73; // [sp+208h] [bp-300h]@49
  char s; // [sp+3C8h] [bp-140h]@49
  int v75; // [sp+448h] [bp-C0h]@13
  int v76; // [sp+468h] [bp-A0h]@34
  int v77; // [sp+488h] [bp-80h]@34
  int v78; // [sp+4A8h] [bp-60h]@44
  char *v79;

  v2 = a2;
  sub_15988("sysconf", "swupgrade");
  v3 = get_value_post(v2, "act", &v79, 32);
  if ( !v3 )
    goto LABEL_12;
  if ( !strcmp(&v79, "update") )
  {
    set_firmup_status(1);
LABEL_12:
    v8 = hwinfo_get_firmup_duration(signal_start("firmupui"));
    printf("<html>");
    printf("<form method=post name=firmup_fm action=timepro.cgi>");
    printf("<input type=hidden name=tmenu value=iframe>");
    printf("<input type=hidden name=smenu value=sysconf_swupgrade_online_status>");
    printf("<input type=hidden name=act>");
    printf("</form>");
    v10 = get_firmup_status("<script>");
    v11 = v10;
    if ( v10 )
    {
      snprintf((char *)&v75, 0x20u, "firmup_counter_%d", get_firmup_status("<script>"));
      v12 = istatus_get_intvalue_direct(&v75);
      if ( v12 == -1 )
        v12 = 0;
      v13 = v12 + 1;
      if ( v12 + 1 > 64 )
        v13 = 0;
      snprintf((char *)&v75, 0x20u, "firmup_counter_%d", v11);
      v14 = istatus_set_intvalue_direct(&v75, v13);
      v15 = dest;
      switch ( v11 )
      {
        case 1:
          v16 = sub_14BF4(istatus_set_intvalue_direct(&v75, v13));
          v17 = &dest[snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\">", v16)];
          v18 = sub_15A94(351);
          v19 = 0;
          v20 = &v17[snprintf(v17, 0x200u, " %s", v18)];
          while ( v19 < v13 )
          {
            ++v19;
            v20 += snprintf(v20, 0x200u, ".");
          }
          puts("DisableRadio( parent.document.view_fm.firmup);");
          puts("DisableObj( parent.document.getElementById('onlineupdate_bt'));");
          puts("parent.document.getElementById('onlineupdate_bt').style.color = 'gray';");
          puts("ShowObj( parent.document.getElementById('cancel_bt'));");
          goto LABEL_52;
        case 2:
          v21 = 0;
          v23 = sub_14BF4(puts("DisableRadio( parent.document.view_fm.firmup);"));
          v24 = &dest[snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\">", sub_14BF4(puts("DisableRadio( parent.document.view_fm.firmup);")))];
          v26 = &v24[snprintf(v24, 0x200u, " %s", sub_15A94(347))];
          while ( v21 < v13 )
          {
            ++v21;
            v26 += snprintf(v26, 0x200u, ".");
          }
          goto LABEL_52;
        case 3:
          puts("DisableRadio( parent.document.view_fm.firmup);");
          v27 = puts("ShowObj( parent.document.getElementById('cancel_bt'));");
          v29 = &dest[snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\">", sub_14BF4(v27))];
          v30 = sub_15A94(348);
          v33 = sub_4FBA8(100 * get_filesize("/tmp/firmware"), hwinfo_get_max_firmware_size());
          v34 = sub_15A94(348);
          v35 = 0;
          v36 = &v29[snprintf(v29, 0x200u, " %s (%d %%) ", v34, v33)];
          while ( v35 < v13 )
          {
            ++v35;
            v36 += snprintf(v36, 0x200u, ".");
          }
          goto LABEL_52;
        case 4:
          v37 = 0;
          puts("DisableRadio( parent.document.view_fm.firmup);");;
          v40 = &dest[snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\">", sub_14BF4(puts("HideObj( parent.document.getElementById('cancel_bt'));")))];
          v42 = &v40[snprintf(v40, 0x200u, " %s", sub_15A94(345))];
          while ( v37 < v13 )
          {
            ++v37;
            v42 += snprintf(v42, 0x200u, ".");
          }
          goto LABEL_52;
        case 5:
          puts("DisableRadio( parent.document.view_fm.firmup);");
          puts("HideObj( parent.document.getElementById('cancel_bt'));");
          v45 = &dest[snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\">", sub_14BF4(get_ifconfig("br0", &v77, &v76)))];
          v47 = &v45[snprintf(v45, 0x200u, " %s", sub_15A94(353))];
          v48 = &v47[snprintf(v47, 0x200u, "<span id=firmup_dot></span><br>")];
          v49 = snprintf(v48, 0x200u, "&nbsp;&nbsp;&nbsp;&nbsp;");
          v50 = sub_15A94(933);
          v51 = sub_15A94(955);
          snprintf(&v48[v49], 0x200u, "(%s <span id=firmup_duration>%d</span>%s)", sub_15A94(933), v8, sub_15A94(955));
          v52 = 100;
          goto LABEL_40;
        case 6:
          strcpy(dest, "");
          goto LABEL_59;
        default:
          goto LABEL_59;
        case 10:
        case 14:
          v15 = dest;
          puts("EnableRadio( parent.document.view_fm.firmup);");
          puts("EnableObj( parent.document.getElementById('onlineupdate_bt'));");
          puts("parent.document.getElementById('onlineupdate_bt').style.color = '';");
          puts("HideObj( parent.document.getElementById('cancel_bt'));");
          if ( v11 == 14 )
            v53 = 349;
          else
            v53 = 350;
          break;
        case 11:
          v53 = 344;
          break;
        case 12:
          v53 = 346;
          break;
        case 13:
          v53 = 352;
          break;
      }
      snprintf(v15, 0x200u, " %s", sub_15A94(v53));
      v52 = 0;
LABEL_40:
      set_firmup_status(v52);
LABEL_59:
      v63 = 0;
    }
    else if ( get_wan_ip("wan1", &v78) || get_default_gateway("br0", &v78) )
    {
      get_si("pi", &v73);
      v59 = snprintf(&s, 0x80u, &v73);
      switch ( get_firmupcheck_status() )
      {
        case 0:
          v59 = signal_start("firmupcheck");
          goto LABEL_51;
        case 1:
LABEL_51:
          v61 = snprintf(dest, 0x200u, "<img width=10 height=10 src=\"/%s/apply_ani.gif\"> ", sub_14BF4(v59));
          v62 = (const char *)sub_15A94(343);
          snprintf(&dest[v61], 0x200u, v62, &s);
LABEL_52:
          v63 = 1;
          break;
        default:
          goto LABEL_59;
        case 3:
          set_firmupcheck_status(0);
          v63 = get_firmupcheck_version(&v75);
          if ( v63 )
          {
            v64 = (const char *)sub_15A94(362);
            v65 = &dest[snprintf(dest, 0x200u, v64, &v75)];
            v66 = snprintf(v65, 0x200u, "<br>");
            v67 = (const char *)sub_15A94(363);
            snprintf(&v65[v66], 0x200u, v67);
            puts("EnableObj( parent.document.getElementById('onlineupdate_bt'));");
            puts("parent.document.getElementById('onlineupdate_bt').style.color = '';");
            puts("HideObj( parent.document.getElementById('cancel_bt'));");
            goto LABEL_59;
          }
          snprintf(dest, 0x200u, (const char *)sub_15A94(341));
          break;
        case 4:
          v69 = get_firmware_version2(v59);
          set_firmupcheck_status(0);
          v70 = (const char *)sub_15A94(342);
          snprintf(dest, 0x200u, v70, v69);
          goto LABEL_59;
        case 5:
          set_firmupcheck_status(0);
          v71 = (const char *)sub_15A94(341);
          snprintf(dest, 0x200u, v71);
          goto LABEL_59;
      }
    }
    else
    {
      v56 = snprintf(dest, 0x200u, "%s<br>", sub_15A94(61));
      if ( !get_wan_link("wan1") && !get_default_gateway("br0", &v78) )
      {
        snprintf(&dest[v56], 0x200u, "<br>%s", sub_15A94(62));
      }
      v63 = v11;
    }
    printf("if(parent.document.getElementById('firmware_status'))");
    printf("parent.document.getElementById('firmware_status').innerHTML = '%s';\n", dest);
    if ( v11 == 5 )
    {
      printf("parent.PrintRemainTime('firmup_duration',%d);\n", v8);
      puts("PrintDot('firmup_dot',64,64);");
    }
    if ( v63 == 1 )
      printf("setTimeout(function() { location.href = 'timepro.cgi?tmenu=iframe&smenu=sysconf_swupgrade_online_status'; }, 3000);");
    puts("</script>");
    return printf("</html>");
  }
  if ( !strcmp((const char *)&v79, "cancel") )
  {
    v3 = system("/usr/bin/killall wget");
    goto LABEL_12;
  }
  v3 = strcmp((const char *)&v79, "status");
  v4 = v3;
  if ( v3 )
    goto LABEL_12;
  v5 = ((int (*)(void))get_firmup_status)();
  result = printf("Status:%d", v5);
  if ( v5 == 5 )
  {
    v7 = 100;
  }
  else
  {
    if ( v5 <= 9 )
      return result;
    v7 = v4;
  }
  set_firmup_status(v7);
}

char* sub_21690()
{
  puts("<style type=\"text/css\">");
  printf("body { margin: 0; background-color: #EEE; }");
  puts("</style>");
  printf("<body>");
  sub_15988("sysconf", "swupgrade");
  puts("<form method=post action=upgrade.cgi enctype=\"multipart/form-data\" 
    name=image_upload style='margin: 5px 0 0 0; height: 22px; padding: 5px; border-width: 1px 0; border-color: #DDD; border-style: solid;'>");
  printf(
    "<input type=file name=upgrade size=30 maxlength=120 style='width: 430px; font-size: 12px; height: 22px; float:left;'"
    " onchange='onChangeForm(this, %d);'>", hwinfo_get_max_firmware_size());
  puts("<input type=hidden name=act>");
  printf("<input type=button name=upload_submit value=\"%s\" style='float: right; font-size: 12px; height: 22px;' onclick='fir" "mwareSubmit();'>\n", sub_15A94(1049));
  puts("</form>");
  printf("<script>");
  printf("onChangeForm(document.getElementsByName('upgrade')[0], %d);", hwinfo_get_max_firmware_size());
  return printf("</script>");
}

void __fastcall sub_21758(int a1)
{
  int v1; // r5@1
  signed int v2; // r4@2
  int v3; // r0@4
  const char *v4; // r0@6
  int v5; // r0@6
  int v6; // r0@7
  int v7; // r0@7
  const char *v8; // r5@7
  int v9; // r0@7
  int v10; // r0@7
  char *v11; // r1@8
  int v12; // r0@10
  char *v13; // r4@11
  int v14; // r0@13
  int v15; // r0@13
  int v16; // r0@13
  int v17; // r0@13
  int v18; // r0@13
  int v19; // r4@13
  int v20; // r0@13
  int v21; // r0@13
  const char *v22; // r0@13
  int v23; // r0@13
  int v24; // r0@13
  const char *v25; // r0@14
  int v26; // r0@15
  int v27; // r0@15
  int v28; // r0@15
  int v29; // r0@15
  int v30; // r0@15
  int v31; // r0@15
  int v32; // r4@15
  int v33; // r0@15
  int v34; // r0@15
  const char *v35; // r0@15
  int v36; // r0@15
  int v38; // [sp+4h] [bp-4B4h]@13
  int v39; // [sp+84h] [bp-434h]@13
  char v40; // [sp+104h] [bp-3B4h]@13
  char v41; // [sp+1C4h] [bp-2F4h]@13
  char dest; // [sp+2C4h] [bp-1F4h]@4
  char v43; // [sp+3C4h] [bp-F4h]@13
  int v44; // [sp+444h] [bp-74h]@7
  int v45; // [sp+484h] [bp-34h]@1
  int v46; // [sp+4A4h] [bp-14h]@1

  v1 = a1;
  v46 = 0;
  if ( get_wan_ip("wan1", &v45) )
    v2 = 1;
  else
    v2 = get_default_gateway("br0", &v45) != 0;
  strcpy(&dest, "http://download.iptime.co.kr/online_upgrade/ipTIME_Firmware_Wizard(11ac).exe");
  sub_15988("sysconf", "swupgrade");
  puts("<table cellpadding=0px cellspacing=0px style='background-Color: #EEE; width: 641px;'>");
  puts("<tr><td>");
  puts("<table cellspacing=0px cellpadding=0px style='width: 640px; border-bottom: 1px solid #DDD;'>");
  v3 = get_intvalue(v1, "upgradedone", &v46);
  if ( v3 && v46 )
  {
    str(v3);
    printf("<td colspan=2>");
    v4 = (const char *)sub_15A94(1060);
    printf(v4);
    v5 = puts("</td>");
    etr(v5);
  }
  printf("<tr style='background-color: #FFF; height: 24px;'>");
  v7 = printf("<td style='width:190px; padding-left: 5px;'>%s</td>", sub_15A94(1053));
  printf("<td>");
  printf((const char *)get_firmware_version2(v7));
  printf("</td>");
  printf("</tr>");
  printf("<tr style='background-color: #F7F7F7; height: 24px;'>");
  printf("<td style='padding-left: 5px;'>%s</td>", sub_15A94(1047));
  sub_13BBC(&v44, 64);
  printf("<td>%s</td>", &v44);
  printf("</tr>");
  printf("<tr style='background-color: #FFF; height: 24px;'>");
  printf("<td colspan=2></td>");
  printf("</tr>");
  puts("</table></td></tr>");
  puts("<tr><td>");
  v10 = puts("<table cellspacing=0px cellpadding=0px>");
  str(v10);
  printf("<td style=\"height:20px; padding-top: 0px; padding-bottom: 2px; padding-left: 5px; padding-right: 10px;\">");
  puts("<form method=post action=timepro.cgi name=view_fm style='margin:0; padding: 5px 0;'>");
  if ( v2 )
    v11 = "checked";
  else
  printf(
    "<input type=radio id=firmup_online name=firmup value=online style='vertical-align: bottom;' onclick=\"FirmUpView();\" %s>",
    "");
  printf("<label for=firmup_online style='margin-right: 35px;'> %s</label>", sub_15A94(1052));
  if ( v2 )
    v13 = "";
  else
    v13 = "checked";
  printf("<input type=radio id=firmup_manual name=firmup value=manual style='vertical-align: bottom;' onclick=\"FirmUpView();\""
    " %s><label for=firmup_manual> %s</label>","checked", sub_15A94(1051));
  printf("</td>");
  printf("<input type=hidden name=status_code>");
  etr("</form>");
  printf("<tr id=online>");
  puts("<td align=left>");
  printf("<table style='width: 640px;'>");
  printf("<tr height=40 valign=top><td>");
  printf("<table cellpadding=0px cellspacing=0px style='background-color: #FFF; width: 620px; margin: 0 5px; min-height:52px;'><tr><td style='padding: 10px; height: 52px;'>");
  printf("<span ID=firmware_status style='color:gray;'></span>");
  printf("</td></tr></table>");
  printf("</td></tr>");
  printf("<tr height=40 valign=top><td align=right>");
  puts("<form method=post action=timepro.cgi name=firmup2_fm style='margin: 5px 0 0 0; border-width: 1px 0; border-color: #DDD; border-style: solid; padding: 5px;'>");
  printf("<input type=button name=autoup id=cancel_bt style=\"display:none;\" value=\"%s\" onclick=\"CancelFirmUp();\">\n", sub_15A94(340));
  printf("<input type=button name=autoup id=onlineupdate_bt value=\"%s\" style='color:gray;' onclick=\"StartFirmUp();\" disabled>\n", sub_15A94(339));
  puts("</form>");
  printf("</td></tr>");
  printf("<tr><td>");
  v18 = printf("<table cellpadding=0px cellspacing=0px style='margin-left: 5px;'>");
  printf(
    "<tr style='height: 24px;'><td><img src='/%s/warning.gif' style='margin: 0 3px 1px 3px; vertical-align: middle;'><b s"
    "tyle='color: gray;'>%s</b></td></tr>", sub_14BF4(v18), sub_15A94(1061));
  printf("</tr> style='height:180px;'><tb><span style='color: gray;'>%s", sub_15A94(337));
  printf("<tr style='height: 18px;'><td><span style='color: gray;'>");
  printf((const char *)sub_15A94(338), &dest);
  printf("</span></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("</table>");
  printf("<iframe name=\"sysconf_swupgrade_online_status\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_swupgrade_online_status\" frameborder=no style='display:none;'></iframe>");
  etr("</td>");
  printf("<tr id=manual>");
  puts("<td align=left>");
  printf("<table style='width: 640px;'>");
  printf("<tr height=40 valign=top><td>");
  printf("<table id=manual_status_table cellpadding=0px cellspacing=0px style='margin: 0 5px; background-color: #FFF; width: 620px;'>");
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-top: 10px;'>%s</td></tr>", sub_15A94(1054));
  get_si("pi", &v38);
  snprintf(&v41, 0x100u, "%s", &v40);
  snprintf(&v43, 0x80u, "%s", &v39);
  if ( v41 )
  {
    printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>");
    v25 = (const char *)sub_15A94(1055);
    printf(v25, &v41, &v43);
    printf("</td></tr>");
  }
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>%s</td></tr>", sub_15A94(1056));
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-bottom: 10px;'>%s</td></tr>", sub_15A94(1057));
  printf("</table>");
  printf("<table id=manual_upload_table cellpadding=0px cellspacing=0px style='margin: 0 5px; background-color: #FFF; width: 620px; display: none;'>");
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-top: 10px;'>%s</td></tr>", sub_15A94(354));
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>%s</td></tr>", sub_15A94(361));
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'></td></tr>");
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-bottom: 10px; height: 26px;'></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf("<iframe name=\"sysconf_swupgrade_manual_file_form\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_swupgrade_manual_status\" frameborder=no scrolling='no' noresize style='width:100%%; height:39px;'></iframe>");
  puts("<form name='sysconf_swupgrade_manual_file_form' style='margin: 5px 0 0 0; padding: 5px; border-width: 1px 0; border-color: #DDD; border-style: solid; display: none;'>");
  printf("<input type=file name=upgrade size=30 maxlength=120 style='width: 430px; font-size: 12px; color:gray;' disabled>");
  printf("<input type=button name=upload_submit value=\"%s\" style='float: right; font-size: 12px; color: gray;' disabled>\n", sub_15A94(1049));
  puts("</form>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf(
    "<tr style='height: 24px;'><td><img src='/%s/warning.gif' style='margin: 0 3px 1px 3px; vertical-align: middle;'><b s"
    "tyle='color: gray;'>%s</b></td></tr>",
    sub_14BF4("<table cellpadding=0px cellspacing=0px style='margin-left: 5px;'>"),sub_15A94(1061));
  printf("</tr> style='height:180px;'><tb><span style='color: gray;'>%s", sub_15A94(337));
  printf("<tr style='height: 18px;'><td><span style='color: gray;'>");
  printf((const char *)sub_15A94(338), &dest);
  printf("</span></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("</table>");
  printf("</td>");
  puts("</table></td></tr>");
  printf("</table>");
  puts("<script>");
  puts("FirmUpView();");
  puts("</script>");
}
void sub_21DAC(int a1, int a2, _BYTE *a3, int a4)
{
  int v4; // r4@1
  _BYTE *v5; // r6@1
  int v6; // r7@1
  int v7; // r10@1
  char *v8; // r8@1
  int v9; // r0@1
  _BYTE *v10; // r1@2
  int v11; // r0@4
  int v12; // r0@4
  int v13; // r0@6
  char s; // [sp+18h] [bp-140h]@4
  char v16; // [sp+118h] [bp-40h]@1
  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  puts("<td class=\"wansetup_main_td\">");
  v8 = "";
  printf("<span class=\"wansetup_main_p\">%s</span></td>\n", sub_15A94(795));
  puts("<td class=\"wansetup_main_td\">");
  snprintf(&v16, 0x20u, "hw_%s", v4);
  if ( *v5 )
    v10 = v5;
  else
    v10 = 0;
  sub_141A4(&v16, v10, v6);
  printf("</td>");
  printf("<input type=checkbox id=\"macchk_%s\" class=navi_chk name=hw_conf_%s %s onclick=\"SetHWOnCheckEnableHWButton(this,'h"
    "w_%s','%s','macbutton_%s'); setdefaultmac(this, 'hw_%s', '%s');\"><label for=\"macchk_%s\">\n",v4, v4);
  printf("<span class=\"wansetup_main_span\">%s</span></label>", sub_15A94(756));
  snprintf(&s, 0x100u, "timepro.cgi?tmenu=popu&smenu=selectmac&formname=netconf_wansetup&macprefix=", v4, v4, v7, v4, v4, v5, v4);
  v12 = snprintf(&v16, 0x20u, "macbutton_%s", v4);
  if ( !*v5 )
    v8 = "disabled";
  printf(
    "<button type=\"button\" class=\"wansetup_main_button\" name=\"%s\" style=\"margin-left:5px;\" onclick=\"onclick_macs"
    "earchbtn('hw_%s')\" %s>\t\t<img src=\"/%s/fw_search.gif\" style=\"width:16px; height:16px; padding:0; margin:0;\"></button>",&v16,v4,v8,sub_14BF4(v12));
  printf("</td>");
}

void sub_21F04(const char *a1, int a2, int a3)
{
  char *v3; // r5@1
  const char *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r4@4
  int v8; // r0@6
  char *v9; // r4@10
  int v10; // r0@12
  char v12; // [sp+10h] [bp-1B8h]@1
  char v13; // [sp+90h] [bp-138h]@6
  char s; // [sp+110h] [bp-B8h]@6
  char v15; // [sp+190h] [bp-38h]@3

  v3 = &v12;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  get_wan_hw_ifname(a2, &v12);
  if ( !strcmp(v4, "pppoe") || !strcmp(v4, "pptp") )
  {
    v3 = &v15;
    get_pppoe_ifname(v5, &v15);
  }
  if ( !get_mtu_value(v3, 1) )
    get_mtu_value(v3, 1) = v6;
  snprintf(&s, 0x80u, "mtu.%s.%s.check", v4, &v12);
  snprintf(&v13, 0x80u, "mtu.%s.%s", v4, &v12);
  v8 = iconfig_get_intvalue_direct(&s);
  if ( v8 != -1 )
    v4 = (const char *)v8;
  if ( v8 == -1 )
    v4 = 0;
  printf("<td class=\"wansetup_main_td\">");
  puts("<span class=\"wansetup_main_p\">MTU</span>");
  printf("</td>");
  printf(
    "<td class=\"wansetup_main_td\"><input class=\"navi_text\" style=\"width:160px;\" type=text name=%s maxlength=4 value=%d></td>\n", &v13, get_mtu_value(v3, 1));
  puts("</td>");
  printf("<td class=\"wansetup_main_td\">");
  v9 = "";
  if ( v4 )
    v9 = "checked";
  printf(
    "<input type=checkbox class=navi_chk id=\"mtuchk_%s\" name='%s' %s onclick=\"OnCheckEnableMTU(this, '%s')\">\t\t<labe"
    "l for=\"mtuchk_%s\"><span class=\"wansetup_main_span\">%s</span></label>\n", &s, &s, v9, &v13, &s, sub_15A94(793));
  printf("</td>");
}

int sub_22074(int a1)
{
  int v1; // r6@1
  int result; // r0@1
  bool v3; // zf@2
  const char *v4; // r1@2
  int v5; // r0@8
  char s; // [sp+Ch] [bp-18Ch]@5
  char v7; // [sp+10Ch] [bp-8Ch]@4
  char v8; // [sp+14Ch] [bp-4Ch]@1
  char v9; // [sp+16Ch] [bp-2Ch]@2

  v1 = a1;
  result = get_value_post(a1, "act", &v8, 32);
  if ( result )
  {
    get_value_post(v1, "wan", &v9, 20);
    v3 = strcmp(&v9, "wan2") == 0;
    v4 = "eth0";
    if ( v3 )
      v4 = "eth2";
    strcpy(&v7, v4);
    if ( !strcmp(&v8, "connect") )
    {
      set_wansetup_status(&v9, 1);
      snprintf(&s, 0x100u, "%s(%s)", "@{40}", &v9);
      syslog_msg(1, &s);
      stop_wan(&v9);
    }
    else if ( !strcmp(&v8, "disconnect") )
    {
      snprintf(&s, 0x100u, "%s(%s)", "@{41}", &v9);
      syslog_msg(1, &s);
      set_wansetup_status(&v9, 0);
      stop_wan(&v9);
      set_ifconfig(&v7);
    }
    v5 = istatus_remove_status_tag("lanwan_samenetwork");
    result = signal_update(v5);
  }
  return result;
}