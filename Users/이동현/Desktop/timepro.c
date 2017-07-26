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

int sub_221D4(int a1, const char *a2, int a3)
{
  int v3; // r5@1
  const char *v4; // r4@1
  int v5; // r6@1
  char *v7; // [sp+4h] [bp-17Ch]@2
  char s; // [sp+84h] [bp-FCh]@2
  char *v9; // [sp+104h] [bp-7Ch]@2
  char *v10; // [sp+124h] [bp-5Ch]@7
  char *s2; // [sp+138h] [bp-48h]@2
  char *dest; // [sp+14Ch] [bp-34h]@4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !strcmp(a2, "eth0") )
  {
    snprintf(&s, 0x80u, "hw_conf_%s", v5);
    snprintf(&v7, 0x80u, "hw_%s", v5);
    get_hwaddr_kernel(v4, &s2);
    if ( get_value_post(v3, &s, &v9, 32) && !strcmp(&v9, "on") )
    {
      strcpy(&dest, "");
      get_hw_value_post(v3, &v7, &dest);
      if ( !check_invalid_hwaddr(&dest) && strcmp(&dest, &s2) )
      {
        set_hwaddr_kernel(v4, &dest, 1);
        set_hwaddr_cloned(v4, &dest);
      }
    }
    else
    {
      get_hwaddr_org(v4, &v10);
      set_hwaddr_cloned(v4, 0);
      if ( strcmp(&v10, &s2) )
        set_hwaddr_kernel(v4, &v10, 1);
    }
  }
  return 0;
}

int __fastcall sub_22334(int a1, int a2, const char *a3)
{
  const char *v3; // r4@1
  int v4; // r9@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r0@10
  char v9; // [sp+Ch] [bp-1C4h]@4
  char v10; // [sp+8Ch] [bp-144h]@4
  char v11; // [sp+10Ch] [bp-C4h]@3
  char v12; // [sp+14Ch] [bp-84h]@4
  char v13; // [sp+18Ch] [bp-44h]@4
  int v14; // [sp+1ACh] [bp-24h]@9
  v6 = hwinfo_get_mtu(a3);
  if ( !strcmp(a3, "pppoe") || !strcmp(a3, "pptp") )
    get_pppoe_ifname(a2, &v11);
  get_wan_hw_ifname(a2, &v12);
  snprintf(&v10, 0x80u, "mtu.%s.%s", a3, &v12);
  snprintf(&v9, 0x80u, "mtu.%s.%s.check", a3, &v12);
  if ( get_value_post(v4, &v9, &v13, 32) && !strcmp(&v13, "on") )
  {
    if ( get_intvalue_post(v4, &v10, &v14) )
    {
      iconfig_set_intvalue_direct(&v9, 1);
      v7 = get_mtu_value(&v12, 1);
      v6 = v14;
      if ( v7 != v14 )
      {
        iconfig_set_intvalue_direct(&v10, v14);
        if ( strcmp(v3, "pppoe") && strcmp(v3, "pptp") )
          set_mtu_value(&v12, v14);
        v6 = v14;
      }
    }
  }
  else
  {
    iconfig_set_intvalue_direct(&v9, 0);
    if ( strcmp(v3, "pppoe") && strcmp(v3, "pptp") )
      set_mtu_value(&v12, v6);
  }
  return v6;
}

int sub_224E8(int a1, _BYTE *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char *v5; // r1@6
  char *v6; // r0@8
  bool v7; // zf@8
  const char *v8; // r1@8
  char *v9; // r0@8
  char *v10; // r0@13
  bool v11; // zf@13
  const char *v12; // r1@13
  char *v13; // r0@13
  char *v14; // r1@18
  char *v15; // r0@19
  char *v16; // r6@24
  signed int v17; // r4@24
  char *v18; // r6@25
  signed int v19; // r4@25
  int result; // r0@26
  int v21; // r0@30
  char v22; // [sp+18h] [bp-38h]@8
  char v23; // [sp+1Dh] [bp-33h]@10
  char v24; // [sp+22h] [bp-2Eh]@15
  char v25; // [sp+27h] [bp-29h]@19
  char dest; // [sp+2Ch] [bp-24h]@3

  v3 = a1;
  v4 = a3;
  if ( a2 && *a2 )
    sf_strncpy(&dest);
  else
    strcpy(&dest, "");
  if ( dest )
  {
    v5 = strtok(&dest, ".");
    if ( !v5 )
      v5 = "0";
    strcpy(&v22, v5);
    v8 = strtok(0, ".");
    v7 = v6 == 0;
    v9 = &v22;
    if ( v7 )
      v8 = "0";
    else
      v9 = &v23;
    if ( v7 )
      v9 += 5;
    strcpy(v9, v8);
    v12 = strtok(0, ".");
    v11 = strtok(0, ".") == 0;
    v13 = &v22;
    if ( v11 )
      v12 = "0";
    else
      v13 = &v24;
    if ( v11 )
      v13 += 10;
    strcpy(v13, v12);
    if ( strtok(0, ".") )
    {
      v15 = &v25;
    }
    strcpy(&v25, "0");
  }
  else
  {
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
  }
  if ( v4 )
  {
    v18 = &v22;
    v19 = 1;
    do
    {
      result = printf(
                 "<input type=text maxlength=3 size=3 id=\"disabled_%s%d\" style=\"width:28pt; ime-mode:disabled; backgro"
                 "und-color:#EEEEEE;\" value=\"%s\" disabled>",
                 v3,
                 v19,
                 v18);
      if ( v19 != 4 )
        result = putchar(46);
      ++v19;
      v18 += 5;
    }
    while ( v19 != 5 );
  }
  else
  {
    v16 = &v22;
    v17 = 1;
    do
    {
      result = printf(
                 "<input type=text name=\"%s%d\" maxlength=3 size=3 style=\"width:28pt; ime-mode:disabled;\" value=\"%s\""
                 " onfocus=\"this.select();\"\t\t\t    onkeyup=\"IPKeyUp('%s',%d);\" onkeypress=\"return IPKeyDown('%s', "
                 "%d)\" title=\"%s%d\">", v3, v17, v16, v3, v17, v3, v17, sub_15A94(424), v17, *(_DWORD *)&v22);
      if ( v17 != 4 )
        result = putchar(46);
      ++v17;
      v16 += 5;
    }
    while ( v17 != 5 );
  }
  return result;
}

int sub_22690(int a1)
{
  int v1; // r4@1
  int result; // r0@1
  const char *v3; // r0@3
  int v4; // r0@12
  int v5; // r1@15
  int *v6; // r0@16
  int v7; // r0@33
  int v8; // r0@36
  int v9; // r0@36
  int v10; // r0@36
  char v11; // [sp+8h] [bp-480h]@1
  char s; // [sp+208h] [bp-280h]@22
  char v13; // [sp+288h] [bp-200h]@24
  int v14; // [sp+330h] [bp-158h]@24
  char v15; // [sp+334h] [bp-154h]@26
  char v16; // [sp+338h] [bp-150h]@26
  int v17; // [sp+340h] [bp-148h]@24
  char s1; // [sp+344h] [bp-144h]@4
  char v19; // [sp+384h] [bp-104h]@28
  char v20; // [sp+3A4h] [bp-E4h]@28
  char v21; // [sp+3C4h] [bp-C4h]@28
  char v22; // [sp+3E4h] [bp-A4h]@33
  char dest; // [sp+3F8h] [bp-90h]@33
  int v24; // [sp+40Ch] [bp-7Ch]@6
  char v25; // [sp+420h] [bp-68h]@6
  int v26; // [sp+434h] [bp-54h]@6
  int v27; // [sp+448h] [bp-40h]@2
  int v28; // [sp+45Ch] [bp-2Ch]@4

  v1 = a1;
  if ( get_value_post(a1, "act", &v11, 512) )
  {
    if ( !get_value_post(v1, "wan", &v27, 20) )
    {
      return puts("No WAN name is specified. Debug it..");
    }
    get_wan_hw_ifname(&v27, &v28);
    set_wansetup_status(&v27, 1);
    if ( !get_value_post(v1, "wan_type", &s1, 64) )
      return get_value_post(v1, "wan_type", &s1, 64);
    ((void (*)(void))signal_toggle)();
    stop_wan(&v27);
    set_wan_type(&v27, &s1);
    if ( !strcmp(&s1, "static") )
    {
      strcpy((char *)&v26, "");
      get_ip_value_post(v1, "ip", &v26);
      strcpy(&v25, "");
      get_ip_value_post(v1, "sm", &v25);
      strcpy((char *)&v24, "");
      get_ip_value_post(v1, "gw", &v24);
      set_wan_ipconfig(&v28, &v26, &v25, &v24);
      sub_221D4(v1, (const char *)&v28, (int)&s1);
      set_ifconfig(&v28);
      if ( !sysconf_nat_get(1) )
        make_virtual_host_page(&v26);
      if ( check_default_gateway(&v24, &v26, &v25) )
      {
        set_default_gateway(&v28, 0);
      }
      else
      {
        set_default_gateway("br0", 0);
        if ( set_default_gateway(&v28, &v24) )
          set_default_gateway2(&v28, &v26, &v25, &v24);
      }
      signal_wan(sub_22334(v1, (int)&v27, &s1));
    }
    else if ( !strcmp(&s1, "dynamic") )
    {
      set_ifconfig(&v28);
      set_wan_ipconfig(&v28, "0.0.0.0", "255.255.255.0", 0);
      if ( !get_value_post(v1, "allow_private", &v11, 512) || (v5 = strcmp(&v11, "on")) != 0 )
      {
        v5 = 1;
        v6 = &v28;
      }
      else
      {
        v6 = &v28;
      }
      set_dhclient_block_private_ip(v6, v5);
      set_dhcp_auto_restart(&v28, 1);
      sub_221D4(v1, (const char *)&v28, (int)&s1);
      sub_22334(v1, (int)&v27, &s1);
    }
    else if ( !strcmp(&s1, "pppoe") )
    {
      if ( get_pppoe_status(&v27) == 7 )
        set_pppoe_status(&v27, 0);
      set_ifconfig(&v28);
      set_wan_ipconfig(&v28, "0.0.0.0", "255.255.255.0", 0);
      read_pppoe_option(&v27, &s);
      get_value_post(v1, "userid", &s, 128);
      if ( check_unpermitted_chars(&s) )
        strcpy(&s, "");
      get_value_post(v1, "passwd", &v13, 128);
      sub_221D4(v1, (const char *)&v28, (int)&s1);
      v17 = sub_22334(v1, (int)&v27, &s1);
      if ( get_intvalue_post(v1, "lcp_flag", &v14) )
      {
        get_intvalue_post(v1, "lcp_echo_interval", &v15);
        get_intvalue_post(v1, "lcp_echo_failure", &v16);
      }
      else
      {
        v14 = 0;
      }
      save_pppoe_option(&v27, &s);
    }
    snprintf(&s, 0x80u, "dns_%s_chk", &s1);
    snprintf(&v20, 0x20u, "fdns_%s", &s1);
    snprintf(&v19, 0x20u, "sdns_%s", &s1);
    if ( get_value_post(v1, &s, &v21, 32) && !strcmp(&v21, "on") || !strcmp(&s1, "static") )
    {
      if ( strcmp(&s1, "static") && !check_valid_account() )
        goto LABEL_36;
      strcpy(&dest, "");
      strcpy(&v22, "");
      get_ip_value_post(v1, &v20, &dest);
      get_ip_value_post(v1, &v19, &v22);
      set_autodns(0);
      dhcpd_set_dns(&dest, &v22);
      set_manual_dns_flag(&v28, &s1, 1);
      get_remote_addr(set_dns_shadow(&v28, &s1, &dest, &v22));
      syslog_msg(1, "@{57}");
    }
    else
    {
      set_autodns(1);
      set_manual_dns_flag(&v28, &s1, 0);
    }
    set_system_dns(&v27);
LABEL_36:
    v8 = istatus_remove_status_tag("lanwan_samenetwork");
    signal_save(signal_update(signal_toggle(v8)));
    puts("<script language=JavaScript>");
    puts("</script>");
  }
  return result;
}

int sub_22C9C(int a1, int a2)
{
  int v2; // r5@1
  char *v3; // r4@1
  int result; // r0@2
  const char *v5; // r0@4
  int v6; // r0@12
  signed int v7; // r0@13
  char *v8; // r6@24
  const char *v9; // r0@24
  int v10; // r7@24
  const char *v11; // r0@25
  const char *v12; // r0@31
  const char *v13; // r0@34
  const char *v14; // r0@35
  char *v15; // r5@41
  signed int v16; // r0@42
  int v17; // [sp+0h] [bp-338h]@3
  char s; // [sp+200h] [bp-138h]@36
  char v19; // [sp+240h] [bp-F8h]@41
  char v20; // [sp+260h] [bp-D8h]@38
  char v21; // [sp+280h] [bp-B8h]@2
  char v22; // [sp+2A0h] [bp-98h]@38
  char v23; // [sp+2B4h] [bp-84h]@38
  char v24; // [sp+2C8h] [bp-70h]@5
  char v25; // [sp+2DCh] [bp-5Ch]@5
  char v26; // [sp+2F0h] [bp-48h]@5
  char s1; // [sp+304h] [bp-34h]@3
  char v28; // [sp+314h] [bp-24h]@3

  v2 = a2;
  v3 = (char *)get_pvalue(a1, "wan");
  if ( v3 || (v3 = &v21, (result = get_value_post(v2, "wan", &v21, 32)) != 0) )
  {
    get_wan_type(v3, &s1);
    get_wan_hw_ifname(v3, &v28);
    memset(&v17, 0, 0x200u);
    if ( wireless_get_wwan_enable(0) )
    {
      strcpy((char *)&v17, v5 = (const char *)sub_15A94(1536));
    }
    get_wan_ipinfo(v3, &v26, &v25, &v24);
    if ( !strcmp(&s1, "pppoe") )
      sf_strncpy(&v24);
    if ( !get_wansetup_status(v3) )
    {
      v7 = 416;
      goto LABEL_31;
    }
    if ( !strcmp(&s1, "pppoe") || !strcmp(&s1, "pptp") )
    {
      if ( get_idle_timeout(&v28) || !get_wansetup_status(v3) )
      {
        v7 = 1117;
        goto LABEL_31;
      }
      if ( !get_pppoe_status(v3) )
      {
        v7 = 413;
LABEL_31:
        strcat((char *)&v17, (const char *)sub_15A94(v7));
        goto LABEL_32;
      }
      if ( v6 == 4 )
      {
        if ( !v26 )
        {
          v7 = 1114;
          goto LABEL_31;
        }
LABEL_23:
        v7 = 1115;
        goto LABEL_31;
      }
      if ( v6 == 6 )
      {
        v7 = 1118;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v26 )
        goto LABEL_23;
      v10 = sprintf((char *)&v17 + strlen((const char *)&v17), (const char *)sub_15A94(1119));
      if ( istatus_get_intvalue_direct("lanwan_samenetwork") == 1 )
      {
        v11 = (const char *)sub_15A94(794);
        sprintf(&v8[v10], v11, "JavaScript:MovePagetoMain(\\'netconf\\',\\'lansetup\\');");
        goto LABEL_32;
      }
      if ( istatus_get_intvalue_direct("privateip") == 1 && get_dhclient_block_private_ip(&v28) )
      {
        v7 = 1122;
        goto LABEL_31;
      }
    }
LABEL_32:
    if ( !get_wan_link(v3) )
    {
      strcpy((char *)&v17, "");
      if ( wireless_get_wwan_enable(0) )
      {
        strcpy((char *)&v17, (const char *)sub_15A94(1536));
      }
      strcat((char *)&v17, (const char *)sub_15A94(137));
    }
    memset(&s, 0, 0x40u);
    if ( get_idle_timeout(&v28) || !get_wansetup_status(v3) )
    {
      if ( !strcmp(&s1, "static") )
      {
LABEL_50:
        printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
        printf("<form action=\"timepro.cgi\" method=\"post\" name=\"waninfostatus_fm\">");
        printf("<input type=\"hidden\" name=\"tmenu\" value=\"iframe\">");
        printf("<input type=\"hidden\" name=\"smenu\" value=\"hiddenwanstatus\">");
        printf("<input type=\"hidden\" name=\"wan\" value=\"%s\">", v3);
        printf("<input type=\"hidden\" name=\"wan_type\" value=\"%s\">", &s1);
        printf("<input type=\"hidden\" name=\"fdns\" value=\"%s\">", &v23);
        printf("<input type=\"hidden\" name=\"sdns\" value=\"%s\">", &v22);
        printf("<input type=\"hidden\" name=\"ip\" value=\"%s\">", &v26);
        printf("<input type=\"hidden\" name=\"sm\" value=\"%s\">", &v25);
        printf("<input type=\"hidden\" name=\"gw\" value=\"%s\">", &v24);
        printf("<input type=\"hidden\" name=\"buttonact\" value=\"%s\">", &v19);
        printf("</form>");
        printf("</BODY>");
        printf("<script>");
        printf("parent.document.getElementById('connstatus').innerHTML = '%s';\n", &v17);
        printf("parent.document.getElementById('conbtn').value = '%s';\n", &s);
        puts("EnableObj(parent.document.getElementById('conbtn'));");
        puts("if(parent.window.footerbtn_view_control)\tparent.window.footerbtn_view_control(parent.document);");
        puts("if(parent.window.update_addrs)\t\t\tparent.window.update_addrs(document, parent.document);");
        puts("setTimeout(function(){document.waninfostatus_fm.submit(); \t\tif(parent.window.submitted){parent.window.submitted = false; UnMaskIt(parent.document,'apply_mask');}},3000);");
        return printf("</script>");
      }
      sf_strncpy(&v19);
      v15 = &s;
      if ( !strcmp(&s1, "dynamic") )
        v16 = 717;
      else
        v16 = 1123;
    }
    else
    {
      get_dns_shadow(&v28, &s1, &v23, &v22);
      if ( !get_hwaddr_cloned("eth0", &v20) )
        get_hwaddr_kernel(&v28, &v20);
      convert_mac(&v20);
      if ( !strcmp(&s1, "static") )
        goto LABEL_50;
      sf_strncpy(&v19);
      v15 = &s;
      if ( !strcmp(&s1, "dynamic") )
        v16 = 716;
      else
        v16 = 1116;
    }
    sub_15A94(v16);
    sf_strncpy(v15);
    goto LABEL_50;
  }
  return result;
}

void sub_23178(int a1, int a2)
{
  char v4; // [sp+0h] [bp-30h]@1
 
  memset(&v4, 0, 0x20u);
  if ( get_value_post(v2, "act", &v4, 32) )
  {
    if ( !strcmp(&v4, "connect") || !strcmp(&v4, "disconnect") )
      sub_22074(a2);
    else
      sub_22690(a2);
  }
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"netconf_wansetup\">");
  printf("</form>");
  printf("</BODY>");
  printf("<script>");
  if ( v4 )
    printf("parent.window.submitted = true;");
  printf("</script>");
}

void sub_23264(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r9@3
  int v4; // r8@3
  void *v5; // r7@3
  void *v6; // r5@3
  int v7; // r11@3
  int v8; // r0@6
  int v9; // r0@6
  int v10; // r1@7
  int v11; // r0@14
  int v13; // [sp+0h] [bp-48h]@2
  char v14; // [sp+10h] [bp-38h]@1

  v2 = a2;
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"netconf_macsearchiframe\">");
  printf("<input type=\"hidden\" name=\"tmenu\" value=\"iframe\">");
  printf("<input type=\"hidden\" name=\"smenu\" value=\"netconfmacsearch\">");
  printf("<input type=\"hidden\" name=\"inputprefix\" value=\"\">");
  printf("<input type=\"hidden\" name=\"act\" value=\"\">");
  printf("</form>");
  printf("</BODY>");
  printf("<script>");
  if ( get_value_post(v2, "act", &v14, 16) && get_value_post(v2, "inputprefix", &v13, 16) )
  {
    v3 = 0;
    puts("function MakeMacAddrTable()");
    v4 = 0;
    puts("{");
    puts("var obj = parent.document.getElementById('searchmaclist');");
    puts("var HTMLStr = '<div style=\\\"display:block; width:340px; height:24px;\\\">\t\t\t<table class=\\\"wansetup_main_table\\\" style=\\\"width:340px; height:24px;\\\">';");
    v5 = malloc(0xBC00u);
    v6 = v5;
    memset(v5, 0, 0xBC00u);
    v7 = get_hostinfo_from_arp("br0", 256, v5);
    while ( v4 < v7 )
    {
      if ( strcmp((const char *)v6 + 148, "00:00:00:00:00:00") )
      {
        convert_mac((char *)v6 + 148);
        if ( !v3 )
        {
          printf("HTMLStr += '<tr class=\\\"wansetup_main_tr\\\" height=\\\"24\\\">';");
          printf(
            "HTMLStr += '<td class=\\\"wansetup_main_td\\\" \t\t\t\t\tstyle=\\\"width:169px; background-color:#EEEEEE; bo"
            "rder:1px #ccc solid;\\\">\t\t\t\t\t<span class=\\\"wansetup_main_span\\\" style=\\\"text-align:center; width"
            ":100%%;\\\">%s</span></td>';", sub_15A94(857));
          printf(
            "HTMLStr += '<td class=\\\"wansetup_main_td\\\" \t\t\t\t\tstyle=\\\"width:169px; background-color:#EEEEEE; bo"
            "rder:1px #ccc solid;\\\">\t\t\t\t\t<span class=\\\"wansetup_main_span\\\" style=\\\"text-align:center; width" ":100%%;\\\">%s</span></td>';", sub_15A94(856));
          printf("HTMLStr += '</tr>';");
          printf("HTMLStr += '</table></div><div \t\t\tstyle=\\\"display:block; width:340px; max-height:186px; height:186px; overflow:auto; overflow-x:hidden; -ms-overflow-x:hidden;\\\">\t\t\t\t\t<table class=\\\"wansetup_main_table\\\" style=\\\"width:340px;\\\">';");
        }
        printf(
          "HTMLStr += '<tr class=\\\"wansetup_main_tr\\\" height=\\\"24\\\" style=\"cursor:pointer;\"\t\t\t\tonclick=\\\""
          "SelectMacFromPopup(\\'%s\\', \\'%s\\');\\\" onmouseover=\\\"ChangeToOverColor(this);\\\" onmouseout=\\\"Change"
          "ToOutColor(this);\\\">';",
          &v13,
          (char *)v6 + 148);
        printf(
          "HTMLStr += '<td class=\\\"wansetup_main_td\\\" style=\\\"border:1px #ccc solid;\\\">\t\t\t\t<span class=\\\"wa"
          "nsetup_main_span\\\" style=\\\"margin-left:5px; min-width:163px;\\\">%s</a></td>';",
          (char *)v6 + 148);
        v10 = (int)v6 + 128;
        if ( *(_BYTE *)v6 )
          printf(
            "HTMLStr += '<td class=\\\"wansetup_main_td\\\" style=\\\"border:1px #ccc solid;\\\">\t\t\t\t\t<span class=\\"
            "\"wansetup_main_span\\\" style=\\\"margin-left:5px; min-width:163px;\\\">%s(%s)</span></td>';",
            v10,
            v6);
        else
          printf(
            "HTMLStr += '<td class=\\\"wansetup_main_td\\\" style=\\\"border:1px #ccc solid;\\\">\t\t\t\t\t<span class=\\"
            "\"wansetup_main_span\\\" style=\\\"margin-left:5px; min-width:163px;\\\">%s</span></td>';",
            v10);
        ++v3;
        printf("HTMLStr += '</tr>';");
      }
      ++v4;
      v6 = (char *)v6 + 188;
    }
    if ( !v3 )
    {
      printf("HTMLStr += '<tr class=\\\"wansetup_main_tr\\\" height=\\\"24\\\">';");
      printf("HTMLStr += '<td class=\\\"wansetup_main_td\\\" colspan=\\\"2\\\" style=\\\"background-color:#EEEEEE;\\\">\t\t\t\t"
        "<span class=\\\"wansetup_main_span\\\">%s</span></td>';", sub_15A94(858));
      printf("HTMLStr += '</tr>';");
    }
    free(v5);
    puts("HTMLStr += '</table></div>';");
    puts("obj.innerHTML = HTMLStr;");
    puts("}");
    printf("MakeMacAddrTable();");
  }
  printf("</script>");
}

void sub_23500(int a1, int a2)
{
  int v2; // r4@1
  const char *v3; // r0@1
  int v4; // r0@1
  int v5; // r1@1
  char *v6; // r1@2
  int v7; // r0@4
  char *v8; // r1@5
  int v9; // r0@7
  char *v10; // r1@8
  int v11; // r0@10
  char *v12; // r0@12
  int v13; // r10@12
  char *v14; // r8@12
  int v15; // r0@12
  int v16; // r0@14
  int v17; // r0@14
  int v18; // r0@14
  int v19; // r0@16
  int v20; // r0@16
  int v21; // r0@16
  int v22; // r0@16
  int v23; // r0@16
  int v24; // r0@16
  int v25; // r0@16
  int v26; // r0@16
  int v27; // r0@16
  int v28; // r0@18
  int v29; // r0@18
  char *v30; // r1@19
  int v31; // r0@21
  int v32; // r0@21
  int v33; // r0@21
  int v34; // r0@21
  int v35; // r0@21
  char *v36; // r1@22
  int v37; // r0@24
  int v38; // r0@24
  int v39; // r0@24
  int v40; // r0@24
  int v41; // r0@26
  int v42; // r0@26
  int v43; // r0@26
  int v44; // r0@26
  int v46; // [sp+8h] [bp-23Ch]@16
  char v47; // [sp+88h] [bp-1BCh]@16
  int v48; // [sp+130h] [bp-114h]@21
  int v49; // [sp+134h] [bp-110h]@21
  int v50; // [sp+138h] [bp-10Ch]@21
  int v51; // [sp+140h] [bp-104h]@21
  char v52; // [sp+144h] [bp-100h]@1
  char v53; // [sp+1C4h] [bp-80h]@1
  char dest; // [sp+204h] [bp-40h]@1
  char s1; // [sp+244h] [bp+0h]@1
  char v56; // [sp+264h] [bp+20h]@7
  char v57; // [sp+278h] [bp+34h]@7
  char v58; // [sp+28Ch] [bp+48h]@12
  char v59; // [sp+2A0h] [bp+5Ch]@16
  int v60; // [sp+2B4h] [bp+70h]@16
  char v61; // [sp+2C8h] [bp+84h]@14
  char v62; // [sp+2DCh] [bp+98h]@12
  char v63; // [sp+2F0h] [bp+ACh]@12
  char v64; // [sp+304h] [bp+C0h]@1

  v2 = a2;
  strcpy(&dest, "");
  strcpy(&v53, "");
  get_wan_hw_ifname(v2, &v64);
  get_wan_type(v2, &s1);
  strcpy(&v52, (const char *)sub_15A94(729));
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  puts("<form method=\"post\" action=\"timepro.cgi\" name=\"netconf_wansetup\">");
  puts("<input type=hidden name=\"tmenu\" value=\"netconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"wansetup\">");
  puts("<input type=hidden name=\"act\" value=\"\">");
  puts("<input type=hidden name=\"ocolor\" value=\"\">");
  printf("<input type=hidden name=\"wan\" value=\"%s\">\n", v2);
  v4 = printf("<input type=hidden name=\"ifname\" value=\"%s\">\n", &v64);
  v5 = check_valid_account(v4) == 0;
  printf("<input type=hidden name=\"nopassword\" value=\"%d\">");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-top:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp(&s1, "dynamic") )
    v6 = "checked";
  else
    v6 = "";
  printf(
    "<input type=radio id=\"wan_type_id1\" name=\"wan_type\" class=\"navi_radio\" value=\"dynamic\" %s onclick=\"ShowWans"
    "etup('%s','dynamic')\"><label for=\"wan_type_id1\" style=\"display:inline-block; vertical-align:middle;\">",
    v6,
    &v64);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>\n", sub_15A94(718));
  puts("<tr class=\"wansetup_main_tr\" height=\"24\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp(&s1, "pppoe") )
    v8 = "checked";
  else
    v8 = "";
  printf(
    "<input type=radio id=\"wan_type_id2\" name=\"wan_type\" class=\"navi_radio\" value=\"pppoe\" %s onclick=\"ShowWanset"
    "up('%s','pppoe')\"><label for=\"wan_type_id2\" style=\"display:inline-block; vertical-align:middle;\">",
    v8,
    &v64);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", sub_15A94(726));
  strcpy(&v56, "");
  strcpy(&v57, "");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-bottom:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp(&s1, "static") )
    v10 = "checked";
  else
    v10 = "";
  printf(
    "<input type=radio id=\"wan_type_id3\" name=\"wan_type\" class=\"navi_radio\" value=\"static\" %s onclick=\"ShowWanse"
    "tup('%s','static')\"><label for=\"wan_type_id3\" style=\"display:inline-block; vertical-align:middle;\">",
    v10,
    &v64);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", sub_15A94(728));
  if ( !get_hwaddr_cloned("eth0", &v57) )
    get_hwaddr_kernel(&v64, &v57);
  convert_mac(&v57);
  v12 = getenv("REMOTE_ADDR");
  get_internal_pc_hardware_address(v12, &v58);
  get_hwaddr_cloned(&v64, &v56);
  v13 = v56 == 0;
  strcmp(&s1, "dynamic");
  v14 = "checked";
  printf("<tr id=\"dynamic\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v15 = sub_15A94(238);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v15);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v64, &v63, &v62);
  sub_224E8((int)"dynamicip", &v63, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\">");
  if ( get_dhclient_block_private_ip(&v64) )
  printf("<input type=checkbox id=\"aprchkid\" class=\"navi_chk\" name=\"allow_private\" %s>\t\t<label for=\"aprchkid\"><span "
    "class=\"item_text wansetup_main_span\">%s</span></label>", "", sub_15A94(713));
  printf("</td></tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(978));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"dynamicsm", &v62, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(368));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v64, &v61);
  if ( !strncmp(&v61, "ppp", 3u) )
    sf_strncpy(&v61);
  sub_224E8((int)"dynamicgw", &v61, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v64, "dynamic", &v60, &v59);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", sub_15A94(249));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"</td>", &v60, 0);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v20 = sub_15A94(950);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v20);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"sdns_dynamic", &v59, 0);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_manual_dns_flag(&v64, "dynamic");
  printf("<input type=checkbox name=\"dns_dynamic_chk\" class=navi_chk %s onclick=\"check_dns_dynamic();\" id=\"dns_dynamic_chkid\">\n");
  printf("<label for=\"dns_dynamic_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", sub_15A94(699));
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_21DAC((int)"dynamic", (int)&v58, &v57, v13);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_21F04("dynamic", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  read_pppoe_option(v2, &v46);
  strcmp(&s1, "pppoe");
  printf("<tr id=\"pppoe\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=wansetup_main_td><span class=\"wansetup_main_p\">%s</span></td>", sub_15A94(722));
  printf(
    "<td class=wansetup_main_td><input class=navi_text type=text style=\"width:160px;\" name=\"userid\" maxlength=63 valu"
    "e=\"%s\"></td>\n",
    &v46);
  printf("<td class=wansetup_main_td></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=wansetup_main_td>", sub_15A94(725));
  printf("<td class=wansetup_main_td><input class=\"navi_text\" type=password style=\"width:160px;\" name=\"passwd\" \t\tid=\"passwd_passwd\" maxlength=63 value=\"");
  sub_14AE8(&v47);
  puts("\"><input class=\"navi_text\" type=text style=\"width:160px; display:none;\" id=\"passwd_text\" maxlength=63></td>");
  v24 = sub_15A94(1238);
  printf(
    "<td class=wansetup_main_td><input type=\"checkbox\" id=\"passviewid\" name=\"passviewname\" onclick=\"clicked_passvi"
    "ew(this.checked, 'passwd');\" value=\"1\">\t\t<label for=\"passviewid\">%s</label></td>",
    v24);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "FFFFFF");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(238));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v64, &v63, &v62);
  sub_224E8((int)"pppoeip", &v63, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(978));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"pppoesm", &v62, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(368));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v64, &v61);
  if ( !strncmp(&v61, "ppp", 3u) )
    sf_strncpy(&v61);
  sub_224E8((int)"pppoegw", &v61, 1);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v64, "pppoe", &v60, &v59);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", sub_15A94(249));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"fdns_", &v60, 0);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", sub_15A94(950));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"sdns_pppoe", &v59, 0);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  if ( get_manual_dns_flag(&v64, "pppoe") )
    v30 = "checked";
  else
    v30 = "";
  printf(
    "<input type=checkbox name=\"dns_pppoe_chk\" class=navi_chk %s onclick=\"check_dns_pppoe();\" id=\"dns_pppoe_chkid\">\n",
    v30);
  printf("<label for=\"dns_pppoe_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", sub_15A94(699));
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_21DAC((int)"pppoe", (int)&v58, &v57, v13);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_21F04("pppoe", v2, v51);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\">");
  printf("<span class=\"wansetup_main_p\">%s</span>", sub_15A94(501));
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  printf("<span class=\"wansetup_main_span\">%s</span>", sub_15A94(500));
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_interval\" size=3 maxlength=3 value=\"%d\" >", v49);
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-right:5px;\">%s</span>", sub_15A94(954));
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-left:5px;\">%s</span>", sub_15A94(499));
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_failure\" size=3 maxlength=3 value=\"%d\" >", v50);
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  if ( v48 )
    v36 = "checked";
  else
    v36 = "";
  printf(
    "<input type=checkbox class=navi_chk id=\"lcpid\" name='lcp_flag' %s onclick=\"OnCheckEnableLCP()\" value=1>\n",
    v36);
  printf("<label for="lcpid">", sub_15A94(793));
  printf("</td>");
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  strcmp(&s1, "static");
  printf("<tr id=\"static\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(238));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v64, &v63, &v62);
  sub_224E8((int)"ip", &v63, 0);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(978));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"sm", &v62, 0);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(368));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v64, &v61);
  if ( !strncmp(&v61, "ppp", 3u) )
    sf_strncpy(&v61);
  sub_224E8((int)"gw", &v61, 0);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v64, "static", &v60, &v59);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", sub_15A94(249));
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"<label for="lcpid">", &v60, 0);
  puts("<label for="lcpid">");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v42 = sub_15A94(950);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v42);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_224E8((int)"sdns_static", &v59, 0);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_21DAC((int)"static", (int)&v58, &v57, v13);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_21F04("static", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#FFFFFF; border-bottom:1px #CCC solid;\">");
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\" id=\"conntitle\">%s</span></td>", sub_15A94(697));
  printf("<td class=\"wansetup_main_td\" colspan=\"2\" height=\"24\">\t<div style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\">\t<p id=\"connstatus\" style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\"></p></div>");
  printf(
    "<div style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0 0 0 10px; width:70px; pa"
    "dding:0;\">\t\t<input type=\"button\" class=\"bt\" id=\"appbtn\" value=\"%s\" onclick=\"apply_wansetup('%s','%s');\""
    ">\t\t<input type=\"button\" class=\"bt\" id=\"conbtn\" value=\"\" onclick=\"apply_connection('%s','%s');\" style=\"d"
    "isplay:none;\"></div>\n", sub_15A94(32), v2, &v64, v2, &v64);
  printf("</td></tr>");
  puts("</form>");
  printf("<form method=\"post\" name=\"backup_wansetup\">");
  printf("</form>");
}

void sub_242FC(int a1)
{
  int v1; // r6@1
  int v3; // [sp+0h] [bp-50h]@1
  char v4; // [sp+20h] [bp-30h]@1

  v1 = a1;
  get_wan_type(a1, &v4);
  get_wan_hw_ifname(v1, &v3);
  sub_15988("netconf", "wansetup");
  puts("<script language=JavaScript>");
  printf("ShowWansetup('%s','%s');", &v3, &v4);
  puts("check_dns()");
  puts("OnCheckEnableLCP();");
  puts("</script>");
}

void sub_24384(int a1)
{
  int v1; // r5@1
  int v2; // r0@3
  int v3; // r0@3
  int v4; // r0@3
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r0@7
  int v8; // r0@7
  int v9; // r0@10
  int v10; // r0@12
  int v11; // r0@12
  int v13; // [sp+0h] [bp-38h]@3
  char dest; // [sp+14h] [bp-24h]@1

  v1 = a1;
  strcpy(&dest, "");
  if ( !get_value(v1, "wan", &dest, 20) )
    strcpy(&dest, "wan1");
  puts("<script language=JavaScript>");
  puts("<!--");
  puts("function CheckNetworkConfig()");
  puts("{");
  get_netaddr("br0", &v13);
  printf("\tif(GetNetworkAddress('ip','sm')==\"%s\")\n", &v13);
  printf("9", sub_15A94(721));
  printf("\telse if(GetNetworkAddress('gw','sm')==\"%s\")\n", &v13);
  printf("9", sub_15A94(720));
  puts(" \telse");
  puts("\t{");
  puts("\t\treturn 1;");
  puts("\t}");
  puts("\treturn 0;");
  puts("}");
  puts("-->");
  puts("</script>");
  puts("<style type=\"text/css\">");
  puts(".wansetup_main_table {");
  puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
  puts("\ttable-layout:fixed;");
  puts("}");
  puts(".wansetup_main_tr {");
  puts("\tborder:0 0 0 0; padding:0 0 0 0;");
  puts("}");
  puts(".wansetup_main_td {");
  puts("\tpadding:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_p {");
  puts("\tpadding-left:5px; display:inline-block;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_span {");
  puts("\tdisplay:inline-block; vertical-align:middle;");
  puts("}");
  puts(".wansetup_main_button {");
  puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_td input[type=checkbox], .wansetup_main_td input[type=radio] {");
  puts("display:inline-block; vertical-align:middle;");
  puts("}");
  printf("input[type=\"text\"] {border:1px #CCC solid;}");
  printf("input[type=\"password\"] {border:1px #CCC solid;}");
  printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span, td {cursor:default;}");
  if ( is_mobile_agent(printf("</style>")) )
  {
    sub_1590C();
    v6 = sub_15958(printf("<iframe name=\"hiddenwansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwansetup\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>"));
  }
  if ( is_mobile_agent(printf("<iframe name=\"hiddenwansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwansetup\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>")))
  {
    sub_1590C();
    v7 = printf(
           "<iframe name=\"hiddenwanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwanstatus&wan=%s\" \t\t\tf"
           "rameborder=no width=0 height=0 align=center scrolling=no></iframe>",
           &dest);
  }
  else
  {
    sub_15958(v7) = printf(
           "<iframe name=\"hiddenwanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwanstatus&wan=%s\" \t\t\tf"
           "rameborder=no width=0 height=0 align=center scrolling=no></iframe>",
           &dest);
  }
  if ( is_mobile_agent(v8) )
  {
    sub_1590C();
    sub_15958(printf("<iframe name=\"hiddenmacsearch_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=netconfmacsearch\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
    );
  }
  else
  {
    printf("<iframe name=\"hiddenmacsearch_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=netconfmacsearch\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">\n");
  sub_23500(v1, (int)&dest);
  sub_242FC((int)&dest);
  printf("</table>");
  printf("<script>");
  puts("init_checkform();");
  printf("</script>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    sub_14BF4(puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">")));
  printf("</SPAN></td>");
  printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"wansetup_div_msg\">\n");
  printf("</SPAN></td>");
  printf("</tr><table></DIV>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "macsearch_mask");
  printf(
    "<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff; "
    "                opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\" "
    "\t\tonclick=\"UnMaskIt(document,'%s');\">\n",
    "macsearch_mask");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:151px; top:128px; width:340px; height:210px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888; overflow:hidden;\" id=\"searchmaclist\">");
  printf("</DIV>");
}
void sub_247F4()
{
  printf("<tr style='background-color: #EEE; height: 24px;'><td>");
  printf("<b style='padding-left: 5px;'>%s</b>", sub_15A94(1075));
  printf("</td></tr>");
  printf("<tr style='border-top: 1px solid #CCC;'><td>");
  printf("<iframe name=\"sysconf_syslog_setup\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_syslog_setup\" frameborder=no style='width:100%%; height:120px;'></iframe>");
  printf("</td></tr>");
}

void sub_24850()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r0@1

  printf("<tr><td>");
  puts("<table cellspacing=0px cellpadding=0px style='border-bottom: 1px solid #CCC; height: 24px; background-color: #EEE;'>");
  printf("<colgroup><col width=158px><col width=402px><col width=81px></colgroup>");
  printf("<tr>");
  printf("<td><span style='padding-left: 5px;'>%s</span></td>", sub_15A94(1073));
  printf("<td><span>%s</span></td>", sub_15A94(1068));
  printf(
    "<span name=rmlog_bt style='margin-right: 20px; cursor:pointer; width: 65px;' onclick=\"RemoveLog();\"><img src='/%s/"
    "minus_icon.gif' style='margin: 1px;'>%s</span>",
    sub_14BF4(puts("<td align=right>")),
    sub_15A94(1070));
  printf("</td>");
  printf("</tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf("<iframe name=\"sysconf_syslog_log\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_syslog_log\" scrolling=yes frameborder=no style='width:100%%; height:336px; border-bottom: 1px solid #CCC;'></iframe>");
  printf("<iframe name=\"sysconf_syslog_log_clear\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_syslog_log_clear\" frameborder=no style='display:none;'></iframe>");
  printf("</td></tr>");
}

int sub_24948(int a1)
{
  int v1; // r5@1
  int result; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  int v5; // r0@7
  int v6; // r6@8
  int v7; // r4@10
  int v8; // r2@13
  int v9; // r0@14
  int v10; // [sp+0h] [bp-38h]@1

  v1 = a1;
  result = get_value_post(a1, "act", &v10, 32);
  if ( result )
  {
    if ( !strcmp((const char *)&v10, "remove") )
    {
      v3 = syslog_clear();
    }
    else
    {
      if ( !strcmp((const char *)&v10, "sendmail") )
      {
        signal_update(syslog_set_sendmail());
        return 1;
      }
      if ( get_value_post(v1, "log_flag", &v10, 32) )
      {
        v5 = strcmp((const char *)&v10, "on") == 0;
        syslog_set_status(v5);
      }
      v6 = get_value_post(v1, "log_email_chk", &v10, 32);
      if ( v6 )
        v6 = strcmp((const char *)&v10, "on") == 0;
      v7 = get_value_post(v1, "email_hour", &v10, 32);
      if ( v7 )
        v7 = atoi((const char *)&v10);
      if ( get_value_post(v1, "log_rmflag_chk", &v10, 32) )
        v8 = strcmp((const char *)&v10, "on") == 0;
      v3 = signal_update(syslog_set_email_status(v6, v7));
    }
    signal_save(v3);
    return 1;
  }
  return result;
}

void sub_24AB0(int a1)
{
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  printf("<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    sub_14BF4(puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");););
  printf("</SPAN></td>");
  printf(
    "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\"> <SPAN style=\"vertical-align:" "middle; display:block; text-align:center;\">%s\n", a1);
  printf("</SPAN></td>");
  printf("</tr></table></DIV>");
}

void sub_24B60()
{
  printf("<style>");
  printf("body { margin: 0; background-color: #EEE; }");
  printf("form { margin: 0; }");
  printf("tr { height: 24px; }");
  printf("</style>");
  sub_15988("sysconf", "syslog");
  puts("<form method=post action=timepro.cgi name=syslog_fm>");
  printf("<table id='sysconf_syslog_setup_table' cellspacing=0px cellpadding=0px style='width:100%%; padding-left: 5px; border-bottom: 1px solid #CCC;'>\n");
  printf("</table>");
  printf("<iframe name=\"sysconf_syslog_setup_status\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_syslog_setup_status\" frameborder=no style='display:none;'></iframe>");
  printf("</form>");
}

void sub_24BF4(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  char *v6; // r7@2
  int v7; // r0@4
  int v8; // r0@4
  char *v9; // r7@5
  int v10; // r0@7
  int v11; // r0@7
  int v12; // r0@7
  int v13; // r0@7
  int v14; // r8@7
  int v15; // r7@7
  int v16; // r0@7
  int v17; // r0@7
  int v18; // r0@7
  int v19; // r0@7
  char *v20; // r1@10
  const char *v21; // r0@12
  const char *v22; // r0@15
  char *v23; // r1@16
  const char *v24; // r0@18
  int v25; // r0@18
  int v26; // r0@18
  const char *v27; // r0@18
  const char *v28; // r0@19
  int v29; // r0@19
  int v30; // r0@20
  char v32; // [sp+4h] [bp-124h]@8
  char v33; // [sp+84h] [bp-A4h]@7
  int v34; // [sp+104h] [bp-24h]@7
  unsigned int v35; // [sp+108h] [bp-20h]@7
  int v36; // [sp+10Ch] [bp-1Ch]@7

  v2 = sub_24948(a2);
  print_start_main_table();
  puts("<form method=post action=timepro.cgi name=syslog_fm>");
  puts("<input type=hidden name=tmenu value=iframe>");
  puts("<input type=hidden name=smenu value=sysconf_syslog_setup_status>");
  puts("<input type=hidden name=act value=>");
  str("<table id='sysconf_syslog_setup_table' cellspacing=0px cellpadding=0px style='width:100%%; padding-left: 5px; border-bottom: 1px solid #CCC;'>\n");
  printf("<td style='width:130px;'><span>%s</span></td>", sub_15A94(1071));
  if ( syslog_get_status("<td colspan=2>") )
    v6 = "checked";
  else
  printf("<input type=radio id=log_flag_on name=log_flag value=on %s><label for=log_flag_on> %s</label>", "", sub_15A94(965));
  if ( syslog_get_status(print_nbsp(5)) )
    v9 = "";
  else
  printf("<input type=radio id=log_flag_off name=log_flag value=off %s><label for=log_flag_off> %s</label>", "checked", sub_15A94(972));
  str(etr("</td>"));
  printf("<td><span>%s</span></td>", sub_15A94(1072));
  puts("<td colspan=2>");
  v14 = sub_15A94(1062);
  v15 = syslog_get_count();
  v16 = syslog_max_count();
  printf("<span style='padding-left: 4px;'>%s : %d(%d)</span>", v14, v15, v16);
  v17 = printf("</td>");
  v18 = etr(v17);
  str(v18);
  v19 = sub_15A94(1067);
  printf("<td><span>%s</span></td>", v19);
  syslog_get_email_status(&v36, &v35, &v34);
  if ( get_admin_email(&v33) && get_smtp_server(&v32) )
  {
    printf("<td>");
    if ( v36 )
      v20 = "checked";
    else
      v20 = "";
    printf(
      "<input type=checkbox id=log_email_chk name=log_email_chk %s style='vertical-align: middle;' onclick='toggleTimeCheckbox();'>",
      v20);
    print_nbsp(1);
    printf("<label for=log_email_chk>");
    v21 = (const char *)sub_15A94(1065);
    printf(v21);
    printf("</label>");
    if ( v35 > 0x17 )
      printf("<input type=number id=email_hour name=email_hour min=0 max=23 style='width: 37px; padding-left: 2px; border: 1px solid #CCC;'>");
    else
      printf("<input type=number id=email_hour name=email_hour min=0 max=23 style='width: 37px; padding-left: 2px; border: 1px solid #CCC;' value=%d>");
    printf("<label for=log_email_chk>");
    v22 = (const char *)sub_15A94(1066);
    printf(v22);
    printf("</label>");
    printf("</td>");
    printf("<td style='width: 380px;'>");
    if ( v34 )
      v23 = "checked";
    else
      v23 = "";
    printf(
      "<input type=checkbox id=log_rmflag_chk name=\"log_rmflag_chk\" %s style='vertical-align: middle;'>",
      v23,
      "");
    print_nbsp(1);
    printf("<label for=log_rmflag_chk>");
    printf((const char *)sub_15A94(1064));
    etr("</label>");
    printf("<tr style='height:40px;'>");
    printf("<td></td>");
    printf("<td align=left>");
    printf("<input type=button name=\"sendmail_bt\" value=\"%s\" onclick=\"Send_Email();\">", sub_15A94(1074));
    printf("</td>");
    v27 = "<td align=right>";
  }
  else
  {
    puts("<td><span style='padding-left: 2px;'>");
    printf((const char *)sub_15A94(1063), "JavaScript:parent.MovePagetoMain('sysconf','login');");
    etr("</span></td>");
    printf("<tr style='height:45px;'>");
  }
  puts("<td colspan=2 align=right>");
  printf("<input type=button name=rmlog_bt value=\"%s\" style='margin-right: 20px;' onclick=\"ApplySyslog();\">", sub_15A94(32));
  printf("</td>");
  printf("</tr>");
  printf("</table>");
  puts("</form>");
  printf("<script>");
  printf("parent.document.getElementById('sysconf_syslog_setup_table').outerHTML = document.getElementById('sysconf_syslog_setup_table').outerHTML;");
  if ( v2 )
    printf("setTimeout(function() { UnMaskIt(parent.parent.document, 'apply_mask'); }, 500);");
  printf("parent.toggleTimeCheckbox();");
  printf("</script>");
}

int sub_24FBC()
{
  int v0; // r4@1
  const char *v1; // r1@3

  v0 = 0;
  printf("<style>");
  printf("body { margin: 0; }");
  printf("form { margin: 0; }");
  printf("tr { height: 24px; }");
  printf(".selected { background-color: #CCCCFF !important; }");
  printf(".highlight { background-color: #E8E8E8 !important; }");
  printf(".highlight_selected { background-color: #BBBBFF !important; }");
  printf("</style>");
  sub_15988("sysconf", "syslog");
  printf("<dev id='syslog_dummy_tr' style=;display:none;'>");
  printf("<table cellspacing=0px cellpadding=0px style='width:100%%;'>\n");
  do
  {
    if ( v0 & 1 )
      v1 = "#FFF";
    else
    ++v0;
    printf("<tr style='background-color:%s;'><td colspan=2><p name=blanktr>&nbsp;</p></td></tr>", "#");
  }
  while ( v0 != 14 );
  printf("</table>");
  return printf("<iframe name=\"sysconf_syslog_log_status\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_syslog_log_status\" frameborder=no style='display:none;'></iframe>");
}

void sub_250A0(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r4@3
  int v4; // r5@3
  const char *v5; // r0@5
  int v6; // r0@9
  int v8; // [sp+4h] [bp-94h]@3
  int v9; // [sp+8h] [bp-90h]@9
  int v10; // [sp+Ch] [bp-8Ch]@4
  int v11; // [sp+14h] [bp-84h]@9
  char v12; // [sp+38h] [bp-60h]@1
  char v13; // [sp+58h] [bp-40h]@3
  void *v14; // [sp+68h] [bp-30h]@1
  size_t v15; // [sp+6Ch] [bp-2Ch]@9
  void *s; // [sp+70h] [bp-28h]@1
  size_t n; // [sp+74h] [bp-24h]@9

  v1 = a1;
  malloc_syslog_string(&s);
  malloc_syslog_string(&v14);
  sub_15988("sysconf", "syslog");
  printf("<div id='syslog_dummy_tr' style='display:none;'>");
  printf("<div id='syslog_dummy_tr'style='display:none;'>");
  printf("<table id='sysconf_syslog_log_table' cellspacing=0px cellpadding=0px style='width:100%%;'>\n");
  if ( get_value(v1, "logid", &v12, 32) )
  v3 = v2;
  malloc_syslog_msg_structure(&v13, &v8, atoi(&v12));
  v4 = 0;
  while ( syslog_read_syslog_msg(&v13, &v8) )
  {
    printf("<tr onclick=\"ChangeToClickColor(this);\" onmouseover=\"ChangeToOverColor(this);\" onmouseout=\"ChangeToOutColor(this)\">");
    printf("<td style=\"height:20px; padding: 0px 10px 0px 5px; width: 134px; \" >%s</td>", v10);
    puts("<td style=\"height:20px; padding: 0px 10px 0px 10px;\" >");
    if ( v8 == 2 )
    {
      v5 = "<span class=\"log_warning_text\">";
    }
    else if ( v8 == 3 )
    {
      v5 = "<span class=\"log_error_text\">";
    }
    else
    {
      v5 = "<span class=\"log_info_text\">";
    }
    puts(v5);
    ++v4;
    memset(s, 0, n);
    memset(v14, 0, v15);
    syslog_decode_text(v11, &v14);
    syslog_convert_syslog_message(&s, &v14);
    sub_14AE8(s);
    etr("</span></td>");
    if ( v3 < v9 )
      v3 = v9;
  }
  free_syslog_string(&s);
  free_syslog_string(&v14);
  free_syslog_msg_structure(&v13, &v8);
  printf("</table>");
  printf("</div>");
  printf("<script>");
  if ( v4 )
  {
    printf("setTRBackgroundColor();");
    printf("parent.document.getElementById('syslog_dummy_tr').outerHTML = document.getElementById('syslog_dummy_tr').innerHTML;");
    printf("DeleteBlankTr();");
  }
  printf("setTimeout(function){location.href='timepro.cgi?tmenu=iframe&smenu=sysconf_Syslog_log_status&logid=%d'", v3);
  printf("</script>");
}

int sub_252A4(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  puts("<form method=post action=timepro.cgi name=syslog_fm>");
  puts("<input type=hidden name=tmenu value=iframe>");
  puts("<input type=hidden name=smenu value=sysconf_syslog_log_clear>");
  puts("<input type=hidden name=act value='remove'>");
  result = printf("</form>");
  if ( sub_24948(a2) )
  {
    printf("<script>");
    printf("<parent.document.getElementsByName('sysconf_syslog_log')[0].contentwindow.");
    printf("setTimeout(function)({unMaskIt(parent.document,'apply_mask.);");
    result = printf("</script>");
  }
  return result;
}

int sub_2532C()
{
  int v0; // r0@1

  sub_15988("sysconf", "syslog");
  printf("<table cellspacing=0px cellpadding=0px style='width:100%%;'>\n");
  sub_24850();
  sub_247F4();
  printf("</table>");
  return sub_24AB0(sub_15A94(31));
}

int sub_25374()
{
  int v0; // r0@1

  sub_15988("sysconf", "syslog");
  printf("<table cellspacing=0px cellpadding=0px style='width:100%%;'>\n");
  sub_24850();
  sub_247F4();
  printf("</table>");
  return sub_24AB0(sub_15A94(31));
}

int __fastcall sub_253BC(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r0@5
  int v5; // r3@5
  int v6; // r0@9
  char v7; // r3@9
  int v8; // r0@13
  char v9; // r3@13
  int v10; // r0@19
  signed int v11; // r3@19
  int v12; // r0@23
  signed int v13; // r3@23
  int v14; // r0@27
  signed int v15; // r3@27
  int v16; // r0@31
  int v17; // r3@31
  int v18; // r0@35
  int v19; // r3@35
  bool v20; // zf@35
  int result; // r0@37

  v1 = a1;
  v2 = istatus_get_intvalue_direct("scan_type");
  *(_DWORD *)v1 = v2;
  if ( v2 == -1 )
    v3 = 0;
  if ( v2 == -1 )
    *(_DWORD *)v1 = v3;
  v4 = istatus_get_intvalue_direct("ping_type");
  *(_DWORD *)(v1 + 4) = v4;
  if ( v4 == -1 )
    v5 = 0;
  if ( v4 == -1 )
    *(_DWORD *)(v1 + 4) = v5;
  v6 = istatus_get_value_direct("ping_addr", v1 + 8);
  if ( v6 == -1 )
    v7 = 0;
  if ( v6 == -1 )
    *(_BYTE *)(v1 + 8) = v7;
  v8 = istatus_get_value_direct("tcp_addr", v1 + 40);
  if ( v8 == -1 )
    v9 = 0;
  if ( v8 == -1 )
    *(_BYTE *)(v1 + 40) = v9;
  if ( istatus_get_value_direct("text_color", v1 + 72) == -1 )
    strcpy((char *)(v1 + 72), "start");
  v10 = istatus_get_intvalue_direct("ping_count");
  *(_DWORD *)(v1 + 104) = v10;
  if ( v10 == -1 )
    v11 = 3;
  if ( v10 == -1 )
    *(_DWORD *)(v1 + 104) = v11;
  v12 = istatus_get_intvalue_direct("ping_datasize");
  *(_DWORD *)(v1 + 108) = v12;
  if ( v12 == -1 )
    v13 = 100;
  if ( v12 == -1 )
    *(_DWORD *)(v1 + 108) = v13;
  v14 = istatus_get_intvalue_direct("ping_timeout");
  *(_DWORD *)(v1 + 112) = v14;
  if ( v14 == -1 )
    v15 = 1;
  if ( v14 == -1 )
    *(_DWORD *)(v1 + 112) = v15;
  v16 = istatus_get_intvalue_direct("tcp_scan_start_port");
  *(_DWORD *)(v1 + 116) = v16;
  if ( v16 == -1 )
    v17 = 0;
  if ( v16 == -1 )
    *(_DWORD *)(v1 + 116) = v17;
  v18 = istatus_get_intvalue_direct("tcp_scan_end_port");
  v20 = v18 == -1;
  *(_DWORD *)(v1 + 120) = v18;
  if ( v18 == -1 )
    v19 = 0;
  result = 0;
  if ( v20 )
    *(_DWORD *)(v1 + 120) = v19;
  return result;
}

int sub_254F4(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@4
  char *v5; // r1@4
  int v6; // r2@4
  int v7; // r0@9
  int v8; // r3@10
  char *v9; // r0@13
  const char *v10; // r2@13
  int v11; // r3@13
  int v12; // r0@22
  int v14; // [sp+0h] [bp-320h]@13
  int v15; // [sp+4h] [bp-31Ch]@13
  char s; // [sp+10h] [bp-310h]@11
  char s1; // [sp+210h] [bp-110h]@1

  v2 = a2;
  v3 = a1;
  if ( get_value_post(a1, "act", &s1, 256) )
  {
    get_intvalue_post(v3, "sel", v2);
    if ( *(_DWORD *)v2 )
    {
      if ( *(_DWORD *)v2 != 1 )
        goto LABEL_8;
      get_ip_value_post(v3, "pip", v2 + 40);
      get_intvalue_post(v3, "start", v2 + 116);
      v5 = "end";
      v4 = v3;
      v6 = v2 + 120;
    }
    else
    {
      get_ip_value_post(v3, "ip", v2 + 8);
      get_intvalue_post(v3, "ping_type", v2 + 4);
      get_intvalue_post(v3, "count", v2 + 104);
      get_intvalue_post(v3, "timeout", v2 + 112);
      if ( *(_DWORD *)(v2 + 4) )
        goto LABEL_8;
      v4 = v3;
      v5 = "datasize";
      v6 = v2 + 108;
    }
    get_intvalue_post(v4, v5, v6);
LABEL_8:
    if ( strcmp(&s1, "start") )
    {
      if ( !strcmp(&s1, "stop") )
      {
        strcpy((char *)(v2 + 72), "stop");
        stop_hostscan(1);
      }
      else if ( !strcmp(&s1, "clear") )
      {
        ((void (*)(void))clear_hostscan_log)();
      }
      goto LABEL_22;
    }
    strcpy((char *)(v2 + 72), "start");
    v7 = stop_hostscan(1);
    if ( *(_DWORD *)v2 )
    {
      if ( *(_DWORD *)v2 != 1 )
        goto LABEL_17;
      v9 = &s;
      v10 = "tcp %s %d %d";
      v14 = *(_DWORD *)(v2 + 116);
      v15 = *(_DWORD *)(v2 + 120);
      v11 = v2 + 40;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 4);
      if ( !v8 )
      {
        v7 = snprintf(
               &s,
               0x200u,
               "icmp %s %d %d %d",
               v2 + 8,
               *(_DWORD *)(v2 + 104),
               1000 * *(_DWORD *)(v2 + 112),
               *(_DWORD *)(v2 + 108));
LABEL_17:
        clear_hostscan_log(v7);
        start_hostscan(&s);
LABEL_22:
        istatus_set_intvalue_direct("scan_type", *(_DWORD *)v2);
        istatus_set_intvalue_direct("ping_type", *(_DWORD *)(v2 + 4));
        istatus_set_value_direct("ping_addr", v2 + 8);
        istatus_set_value_direct("tcp_addr", v2 + 40);
        istatus_set_value_direct("text_color", v2 + 72);
        istatus_set_intvalue_direct("ping_count", *(_DWORD *)(v2 + 104));
        istatus_set_intvalue_direct("ping_datasize", *(_DWORD *)(v2 + 108));
        istatus_set_intvalue_direct("tcp_scan_start_port", *(_DWORD *)(v2 + 116));
        v12 = istatus_set_intvalue_direct("tcp_scan_end_port", *(_DWORD *)(v2 + 120));
        signal_update(v12);
        return 0;
      }
      if ( v8 != 1 )
        goto LABEL_17;
      v9 = &s;
      v14 = *(_DWORD *)(v2 + 104);
      v10 = "arp %s %d %d";
      v15 = 1000 * *(_DWORD *)(v2 + 112);
      v11 = v2 + 8;
    }
    v7 = snprintf(v9, 0x200u, v10, v11, v14, v15);
    goto LABEL_17;
  }
  return 0;
}

void sub_257D4(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r7@1
  int v4; // r0@1
  char *v5; // r1@2
  char *v6; // r8@5
  int v7; // r0@7
  int v8; // r0@9
  int v9; // r0@9
  int v10; // r0@9
  int v11; // r0@9
  int v12; // r7@9
  int v13; // r0@9
  int v14; // r0@9
  int v15; // r7@9
  int v16; // r8@9
  int v17; // r0@9
  int v18; // r0@9
  int v19; // r0@9
  int v20; // r0@9
  int v21; // r0@9
  int v22; // r5@9
  int v23; // r0@9
  int v24; // r0@9
  int v25; // r5@9
  int v26; // r0@9
  int v27; // r0@9
  int v28; // r0@9
  int v29; // r5@9
  int v30; // r0@9
  int v31; // r0@9
  int v32; // r0@10
  int v33; // r0@12
  int v34; // r0@13
  int v35; // r0@13
  int v36; // r0@16
  int result; // r0@16
  const char *v38; // r0@19

  v2 = a2;
  printf("<table class=\"v3_table hostscan_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  puts("<form method=get action=\"timepro.cgi\" name=\"hostscan_fm\">");
  puts("<input type=hidden name=\"tmenu\" value=\"expertconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"hostscan\">");
  printf("<input type=\"hidden\" name=act value\"\">");
  printf("<input type=\"hidden\" name=submitted value\"0\">");
  printf("<COL width=\"130\"><COL width=\"100\"><COL width=\"60\"><COL width=\"80\"><COL width=\"140\"><COL width=\"%%%%\">");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  v3 = "selected";
  *(_DWORD *)v2;
  printf("<input type=radio name=sel id=\"sel_ping\" value=%d onclick=\"hostscanRadio_disableForm(0)\" %s>\n");
  v4 = sub_15A94(1101);
  printf("<label for=\"sel_ping\">%s</label>", v4);
  printf("</td><td class=\"hostscan_main_td\">");
  if ( *(_DWORD *)v2 )
    v5 = "disabled";
  else
    v5 = "";
  printf("<select class=navi_select name=ping_type onchange=\"hostscanSel_disableForm()\" %s>\n", v5);
  if ( *(_DWORD *)(v2 + 4) )
    v6 = "";
  else
    v6 = "selected";
  printf("<option value=%d %s>%s\n", 0, v6, sub_15A94(1100));
  if ( *(_DWORD *)(v2 + 4) != 1 )
    v3 = "";
  printf("<option value=%d %s>%s\n", 1, v3, sub_15A94(1095));
  puts("</select>");
  printf("</td><td class=\"hostscan_main_td\" align=\"right\">");
  printf("<span class=\"hostscan_main_span\" style='margin-right:5px;'>%s</span>", sub_15A94(424));
  printf("</td><td class=\"hostscan_main_td\" colspan=\"2\">");
  sub_14310("ip", v2 + 8, 1);
  printf("</td><td class=\"hostscan_main_td\"></td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  printf("</td><td class=\"hostscan_main_td\">");
  printf(
    "<span class=\"hostscan_main_span\">%s \t\t<input type=text class=navi_text class=navimenu_text name=count maxlength="
    "3 size=3 value=%d></span>\n",
    sub_15A94(1097),
    *(_DWORD *)(v2 + 104));
  printf("</td><td class=\"hostscan_main_td\" align=\"right\">");
  printf("<span class=\"hostscan_main_span\" style='margin-right:5px;'>%s</span>", sub_15A94(1106));
  printf("</td><td class=\"hostscan_main_td\">");
  v12 = *(_DWORD *)(v2 + 112);
  printf("<input type=text class=navi_text name=timeout maxlength=2 size=2 value=%d>%s</span>\n", v12, sub_15A94(954));
  printf("</td><td class=\"hostscan_main_td\" colspan=\"2\">");
  v15 = *(_DWORD *)(v2 + 108);
  printf(
    "<span class=\"hostscan_main_span\">%s \t\t<input type=text class=navi_text name=datasize maxlength=5 size=5 value=%d>%s\n",
    sub_15A94(1098),
    v15,
    sub_15A94(1099));
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  *(_DWORD *)v2;
  printf("<input type=radio name=\"sel\" id=\"sel_tcp\" value=%d onclick=\"hostscanRadio_disableForm(1)\" %s>\n");
  printf("<label for=\"sel_tcp\">%s</label>", sub_15A94(1105));
  printf("</td><td class=\"hostscan_main_td\" colspan=\"3\">");
  printf("<span class=\"hostscan_main_span\">%s", sub_15A94(424));
  sub_14310("pip", v2 + 40, 1);
  printf("</span>");
  printf("<span class=\"hostscan_main_span\">%s <input type=text class=navi_text name=start maxlength=5 size=5 value=%d>\n",
    sub_15A94(1102),
    *(_DWORD *)(v2 + 116));
  printf("~<input type=text class=navi_text name=end maxlength=5 size=5 value=%d></span>\n", *(_DWORD *)(v2 + 120));
  puts("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\" style=\"border-top:1px #CCC solid;\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\" colspan=\"6\" style=\"padding-left:5px;\">");
  v21 = printf("<button type=\"button\" class=\"hostscan_main_button\" style=\"width:55px;\" \t\tonclick=\"hostscanStart(); return ClickEventPropagater();\" id=\"startbtn\">");
  printf("<span class=\"hostscan_main_span\"><img src=\"/%s/apscan.gif\" style=\"margin-right:5px;\">%s</span>", sub_14BF4(v21), sub_15A94(1103));
  printf("</button>");
  v24 = printf("<button type=\"button\" class=\"hostscan_main_button\" style=\"width:55px; margin-left:10px;\" \t\tonclick=\"hostscanStop(); return ClickEventPropagater();\" id=\"stopbtn\">");
  printf(
    "<span class=\"hostscan_main_span\"><img src=\"/%s/minus_icon.gif\" style=\"margin-right:5px;\">%s</span>",
    sub_14BF4(v24),
    sub_15A94(972));
  printf("</button>");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\" style=\"border-bottom:1px #CCC solid;\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\" style=\"background-color:#DBDBDB; border-top:1px #ccc solid; border-bottom:1px #ccc solid;\">\t\t<td class=\"hostscan_main_td\" colspan=\"4\">");
  v28 = printf(
          "<p class=\"hostscan_main_p\"><b>%s</b></p></td><td class=\"hostscan_main_td\" colspan=\"2\" align=\"right\" st"
          "yle=\"padding-right:15px;\">",
          sub_15A94(1104));
  printf(
    "<span class=\"hostscan_main_span\" onclick=\"hostscanClear();\" style=\"cursor:pointer;\">\t\t<img src=\"/%s/minus_i"
    "con.gif\" style=\"margin-right:5px;\">%s</span>",
    sub_14BF4(v28),
    sub_15A94(1096));
  printf("</td></tr>");
  printf("</form>");
  v31 = printf("<tr class=\"hostscan_main_tr\" height=\"360\" style=\"border-bottom:1px #CCC solid;\">\t\t<td class=\"hostscan_main_td\" colspan=\"6\">");
  if ( is_mobile_agent(v31) )
  {
    sub_1590C("360", "100%%", "display:inline-block; *display:inline; zoom:1;");
    v32 = printf("<iframe name=\"hostscanlist_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanlist\"                         frameborder=no width=100%% height=360 align=center scrolling=no></iframe>");
    sub_15958(v32);
  }
  else
  {
    printf("<iframe name=\"hostscanlist_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanlist\"                         frameborder=no width=100%% height=360 align=center scrolling=no></iframe>");
  }
  printf("</td></tr>");
  v33 = printf("</table>");
  if ( is_mobile_agent(v33) )
  {
    sub_1590C("0", "0", "display:inline-block; *display:inline; zoom:1;");
    v34 = printf("<iframe name=\"hostscanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    v35 = sub_15958(v34);
  }
  else
  {
    v35 = printf("<iframe name=\"hostscanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( is_mobile_agent(v35) )
  {
    sub_1590C("0", "0", "display:inline-block; *display:inline; zoom:1;");
    v36 = printf("<iframe name=\"hostscansubmit_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscansubmit\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    result = sub_15958(v36);
  }
  else
  {
    result = printf("<iframe name=\"hostscansubmit_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscansubmit\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 != 1 )
      return result;
    puts("<script language=JavaScript>");
    v38 = "hostscanRadio_disableForm(1);";
  }
  else
  {
    puts("<script language=JavaScript>");
    puts("hostscanRadio_disableForm(0);");
    v38 = "hostscanSel_disableForm();";
  }
  puts(v38);
  puts("init_hostscan();");
  puts("</script>");
}

void sub_25D40()
{
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:auto;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"expertconf_hostscanlist\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=hostscanlist>");
  printf("<div id=\"hostscan_list\" style=\"height:360px; overflow:auto;\">");
  printf("</div>");
  printf("</form>");
  printf("</BODY>");
}

void sub_25DA8()
{
  int v0; // r6@1
  char *v1; // r7@2
  int v2; // r0@3
  char *v3; // r7@3
  int v4; // r0@3
  char *v5; // r7@3
  int v6; // r0@3
  char *v7; // r7@3
  int v8; // r8@3
  int v9; // r10@3
  int v10; // r7@3
  int v11; // r0@3
  char *v12; // r4@3
  int v13; // r5@3
  int v14; // r0@3
  int v15; // r1@3
  int v16; // r3@3
  int v17; // r2@3
  const char *v18; // r0@3
  int v19; // r0@5
  char *v20; // r7@5
  int v21; // r0@5
  char *v22; // r7@5
  int v23; // r0@5
  char *v24; // r4@5
  int v25; // r5@5
  int v26; // r7@5
  int v27; // r4@5
  int v28; // r0@8
  char *v29; // r7@8
  int v30; // r0@8
  char *v31; // r7@8
  int v32; // r0@8
  char *v33; // r0@8
  FILE *v34; // r7@9
  signed int v35; // r4@10
  signed int v36; // r4@11
  const char *v37; // r1@13
  const char *v38; // r1@19
  const char *v39; // r1@25
  char s; // [sp+4h] [bp-124h]@1
  char v42; // [sp+84h] [bp-A4h]@1
  char *save_ptr; // [sp+104h] [bp-24h]@2

  v0 = get_hostscan(&v42);
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"expertconf_hostscanstatus\">");
  printf("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=hostscanstatus>");
  printf("<div id=\"statline\">");
  printf("<table name=\"listtable\" class=\"v3_table hostscan_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  get_hostscan(&s);
  printf(
    "<tr height=\"24\" class=\"hostscan_main_tr\" style=\"background-color:#%s;\"><td class=\"hostscan_main_td\"><p class"
    "=\"hostscan_main_p\">",
    "FFFFFF");
  if ( s )
  {
    v1 = strtok_r(&s, " ", &save_ptr);
    if ( !strcmp(v1, "icmp") )
    {
      printf("%s PING\t", sub_15A94(1100));
      print_nbsp(4);
      printf("%s:%s\t", sub_15A94(424), strtok_r(0, " ", &save_ptr));
      print_nbsp(4);
      printf("%s:%s\t", sub_15A94(1097), strtok_r(0, " ", &save_ptr));
      print_nbsp(4);
      printf("%s:%d%s\t", sub_15A94(1106), sub_4FBA8(atoi(strtok_r(0, " ", &save_ptr)), 1000);, sub_15A94(954));
      v12 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      v13 = sub_15A94(1098);
      v14 = sub_15A94(1099);
      v15 = v13;
      v16 = v14;
      v17 = (int)v12;
      v18 = "%s:%s%s\t";
LABEL_6:
      printf(v18, v15, v17, v16);
      goto LABEL_9;
    }
    if ( !strcmp(v1, "arp") )
    {
      printf("%s PING\t", sub_15A94(1095));
      v20 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      printf("%s:%s\t", sub_15A94(424), v20);
      v22 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      printf("%s:%s\t", sub_15A94(1097), v22);
      v24 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      v26 = atoi(v24);
      v27 = sub_15A94(954);
      v17 = sub_4FBA8(v26, 1000);
      v18 = "%s:%d%s\t";
      v15 = sub_15A94(1106);
      v16 = v27;
      goto LABEL_6;
    }
    if ( !strcmp(v1, "tcp") )
    {
      v28 = sub_15A94(1105);
      printf("%s\t", v28);
      v29 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      v30 = sub_15A94(424);
      printf("%s:%s\t", v30, v29);
      v31 = strtok_r(0, " ", &save_ptr);
      print_nbsp(4);
      v32 = sub_15A94(1102);
      printf("%s:%s~", v32, v31);
      v33 = strtok_r(0, " ", &save_ptr);
      printf("%s\t", v33);
    }
  }
LABEL_9:
  printf("</p></td></tr>");
  v34 = fopen("/var/log/hostscan.log", "rb");
  if ( v34 )
  {
    v35 = 1;
    while ( fgets(&s, 128, v34) )
    {
      if ( strcmp(&s, "\n") )
      {
        if ( v35 & 1 )
          v38 = "F7F7F7";
        else
          v38 = "FFFFFF";
        ++v35;
        printf(
          "<tr height=\"24\" class=\"hostscan_main_tr\" style=\"background-color:#%s;\"><td class=\"hostscan_main_td\"><p"
          " class=\"hostscan_main_p\">",
          v38);
        printf("%s", &s);
        printf("</p></td></tr>");
      }
    }
    while ( v35 <= 14 )
    {
      if ( v35 & 1 )
        v39 = "F7F7F7";
      else
        v39 = "FFFFFF";
      ++v35;
      printf(
        "<tr height=\"24\" class=\"hostscan_main_tr\" style=\"background-color:#%s;\"><td class=\"hostscan_main_td\"><p c"
        "lass=\"hostscan_main_p\">",
        v39);
      printf("</p></td></tr>");
    }
    fclose(v34);
  }
  else
  {
    v36 = 1;
    do
    {
      if ( v36 & 1 )
        v37 = "F7F7F7";
      else
        v37 = "FFFFFF";
      ++v36;
      printf(
        "<tr height=\"24\" class=\"hostscan_main_tr\" style=\"background-color:#%s;\"><td class=\"hostscan_main_td\"><p c"
        "lass=\"hostscan_main_p\">",
        v37);
      printf("</p></td></tr>");
    }
    while ( v36 != 15 );
  }
  printf("</table>");
  printf("</div>");
  printf("</form>");
  printf("</BODY>");
  printf("<script>");
  printf("if(parent.window.init_hostscan_status)parent.window.init_hostscan_status(document, %d);", v0);
  printf("</script>");
}

void sub_262B4(int a1, int a2)
{
  int v2; // r5@1
  char v4; // [sp+4h] [bp-8Ch]@1

  v2 = a2;
  sub_253BC((int)&v4);
  sub_254F4(v2, (int)&v4);
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"expertconf_hostscansubmit\">");
  printf("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=hostscansubmit>");
  printf("</form>");
  printf("</BODY>");
  printf("<script>if(parent.window.init_hostscan_submit)parent.window.init_hostscan_submit();</script>");
}

void sub_26334(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r0@1
  char v5; // [sp+4h] [bp-94h]@1

  v1 = a1;
  sub_253BC((int)&v5);
  sub_15988("expertconf", "hostscan");
  puts("<style type=\"text/css\">");
  puts(".hostscan_main_table {");
  puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
  puts("\ttable-layout:fixed;");
  puts("}");
  puts(".hostscan_main_tr {");
  puts("\tborder:0 0 0 0; padding:0 0 0 0;");
  puts("}");
  puts(".hostscan_main_td {");
  puts("\tpadding:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".hostscan_main_p {");
  puts("\tpadding:0 0 0 5px; display:inline-block;");
  puts("\tvertical-align:middle; margin:0;");
  puts("}");
  puts(".hostscan_main_span {");
  puts("\tdisplay:inline-block; vertical-align:middle;");
  puts("}");
  puts(".hostscan_main_button {");
  puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".hostscan_main_td input[type=checkbox], .hostscan_main_td input[type=radio] {");
  puts("display:inline-block; vertical-align:middle;");
  puts("}");
  puts("#hostscan_div_msg p {");
  puts("margin:5 0 5 15px; text-align:left;");
  puts("}");
  puts(".hostscan_ellipsis {");
  puts("text-overflow:ellipsis; overflow:hidden; white-space:nowrap; text-align:left;");
  puts("}");
  printf("input[type=\"text\"] {border:1px #CCC solid;}");
  printf("input[type=\"password\"] {border:1px #CCC solid;}");
  printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span, td {cursor:default;}");
  printf("</style>");
  sub_257D4(v1, (int)&v5);
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  v2 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    sub_14BF4(v2));
  printf("</SPAN></td>");
  printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"hostscan_div_msg\">\n");
  printf("</SPAN></td>");
  printf("</tr></table></DIV>");
}

signed int sub_265C8(unsigned int a1, int a2)
{
  unsigned int v2; // r4@1
  signed int result; // r0@2
  const char *v4; // r0@4
  const char *v5; // r0@11
  int v6; // [sp+4h] [bp-14h]@1

  v6 = a2;
  v2 = a1;
  if ( a1 <= 1 )
  {
    get_active_wl();
    if ( v2 == 1 )
      v4 = "eth1";
    else
      v4 = "eth2";
    if ( get_ifexist(v4) )
    {
      if ( v6 )
      {
        result = 3;
      }
      else
      {
        if ( v2 == 1 )
          v5 = "eth1";
        else
          v5 = "eth2";
        if ( wireless_api_get_run(v5) )
        {
          if ( wireless_get_multibridge_enable(v2) )
            result = 6;
          else
            result = 0;
        }
        else
        {
          result = 4;
        }
      }
    }
    else
    {
      result = 2;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}

void sub_26658()
{
  puts("<style type=\"text/css\">");
  puts(".onoffswitch {");
  puts("display:inline-block; *display:inline; zoom:1; vertical-align:middle; position:relative; width:45px;");
  puts("-webkit-user-select:none; -moz-user-select:none; -ms-user-select:none; border:1px #999999 solid;");
  puts("-webkit-border-radius:20px; -moz-border-radius:20px; -khtml-border-radius:20px; -ms-border-radius:20px; border-radius:20px;");
  puts("}");
  puts(".onoffswitch-checkbox {");
  puts("display:none;");
  puts("}");
  puts(".onoffswitch-label {");
  puts("display:block; overflow:hidden; cursor:pointer;");
  puts("border-radius:20px;");
  puts("-webkit-border-radius:20px; -moz-border-radius:20px; -khtml-border-radius:20px; -ms-border-radius:20px;");
  puts("}");
  puts(".onoffswitch-inner {");
  printf("display:block; width:200%%; margin-left:-100%%;\n");
  puts("transition:margin 0.3s ease-in 0s;");
  puts("}");
  puts(".onoffswitch-inner:before, .onoffswitch-inner:after {");
  printf("display:block; float:left; width:50%%; height:20px; padding:0; line-height:20px; font-size:10px; color:white;\n");
  puts("font-family:Trebuchet, Arial, sans-serif; font-weight:bold; box-sizing:border-box;");
  puts("}");
  puts(".onoffswitch-inner:before {");
  puts("content: \"On\"; padding-left:5px; background-color:#FFFFFF; color:#000000;");
  puts("}");
  puts(".onoffswitch-inner:after {");
  puts("content: \"Off\"; padding-right:8px; text-align:right; background-color:#FFFFFF; color:#CCCCCC;");
  puts("}");
  puts(".onoffswitch-switch {");
  puts("display:block; width:12px; margin:4px; background:#999999; position:absolute; top:0; bottom:0; right:24px;");
  puts("-webkit-border-radius:20px; -moz-border-radius:20px; -khtml-border-radius:20px; -ms-border-radius:20px;");
  puts("border:1px solid #999999; border-radius:20px; transition:all 0.3s ease-in 0s;");
  puts("}");
  puts("'onoffswitch-checkbox:checked + .onoffswitch-label");
  puts("margin-left:0;");
  puts("}");
  puts("'onoffswitch-checkbox:checked + .onoffswitch-label");
  puts("right:0px; background:#8DAF25;");
  puts("}");
  puts("</style>");
}

void sub_26820()
{
  puts("<style type=\"text/css\">");
  puts(".wl_mbssid_table {");
  puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
  puts("\ttable-layout:fixed;");
  puts("}");
  puts(".wl_mbssid_tr {");
  puts("\tborder:0 0 0 0; padding:0 0 0 0; height:24px;");
  puts("}");
  puts(".wl_mbssid_title {");
  puts("\tborder-top:1px #ccc solid; border-bottom:1px #ccc solid; padding:0 0 0 0; height:24px;");
  puts("}");
  puts(".wl_mbssid_title p{");
  puts("\tfont-weight:bold;");
  puts("}");
  puts(".wl_mbssid_td {");
  puts("\tpadding:0 0 0 5; font-size:12px;");
  puts("\tvertical-align:middle; cursor:pointer;");
  puts("}");
  puts(".wl_mbssid_button {");
  puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wl_mbssid_div {");
  puts("padding:0; margin:0;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wl_mbssid_p {");
  puts("padding:0; margin:0;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wl_opacity_30 {");
  puts("\topacity:0.3;");
  puts("\t-moz-opacity:0.3;");
  puts("\t-khtml-opacity:0.3;");
  puts("\tfilter:alpha(opacity=30);");
  puts("}");
  printf("input[type=\"text\"] {border:1px #CCC solid;}");
  printf("input[type=\"password\"] {border:1px #CCC solid;}");
  printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span {cursor:default;}");
  printf("td, tr, span, p{-ms-user-select:none; -moz-user-select:none; -khtml-user-select:none; -webkit-user-select:none; user-select:none;}");
  printf("</style>");
}

int sub_269F4(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@2
  char *v3; // r4@5
  char *v4; // r1@7
  signed int v5; // r4@7
  int v6; // r0@7
  int result; // r0@7
  int i; // r8@9
  char *v9; // r1@13
  int v10; // r6@15
  char *v11; // r1@15
  int v12; // r10@15
  int v13; // r3@16
  char *v14; // r1@23
  int v15; // r6@25
  int v16; // r10@25
  char *v17; // r12@25
  char *v18; // r1@27
  int v19; // ST04_4@29
  char *v20; // ST0C_4@29
  char *v21; // r7@32
  int v22; // [sp+0h] [bp-560h]@16
  int v23; // [sp+0h] [bp-560h]@26
  int v24; // [sp+10h] [bp-550h]@11
  signed int v25; // [sp+14h] [bp-54Ch]@4
  char v26[1272]; // [sp+18h] [bp-548h]@11
  int v27; // [sp+518h] [bp-48h]@1

  v1 = a1;
  sf_strncpy(&v27);
  if ( !strcmp((const char *)&v27, "eth1") )
    v2 = 80;
  else
    v2 = 40;
  v25 = v2;
  if ( v1 )
    v3 = "5g";
  else
    v3 = "2g";
  printf("var control_channel_arr%s = [];\n", v3);
  v4 = v3;
  v5 = 20;
  v6 = printf("var central_channel_arr%s = [];\n", v4);
  result = make_country_names(v6);
  do
  {
    if ( v5 != 60 )
    {
      for ( i = 0; ; i += 16 )
      {
        v21 = (char *)&country_names + i;
        if ( !*(_DWORD *)((char *)&country_names + i) )
          break;
        result = wireless_get_channel_list(&v27, *((_DWORD *)v21 + 1), v5, v26);
        v24 = result;
        if ( result )
        {
          if ( v1 )
            v9 = "5g";
          else
            v9 = "2g";
          v10 = 0;
          printf("control_channel_arr%s['%s_%d'] = new Array();\n", v9, *((_DWORD *)v21 + 1), v5);
          v12 = 0;
          while ( v12 < v24 )
          {
            v22 = v12;
            v13 = *(_DWORD *)&v26[v10];
            ++v12;
            v10 += 20;
            if ( v1 )
              v11 = "5g";
            if ( !v1 )
              v11 = "2g";
            printf("control_channel_arr%s['%s_%d'][%d] = parseInt(%d);\n", v11, *((_DWORD *)v21 + 1), v5, v22, v13);
          }
          if ( v1 )
            v14 = "5g";
          else
            v14 = "2g";
          v15 = 0;
          result = printf("central_channel_arr%s['%s_%d'] = new Array();\n", v14, *((_DWORD *)v21 + 1), v5);
          v16 = 0;
          v17 = v26;
          while ( v16 < v24 )
          {
            v23 = v16;
            if ( v1 )
              v18 = "5g";
            else
              v18 = "2g";
            ++v16;
            v19 = *(_DWORD *)&v17[v15 + 4];
            v15 += 20;
            v20 = v17;
            result = printf(
                       "central_channel_arr%s['%s_%d'][%d] = parseInt(%d);\n",
                       v18,
                       *((_DWORD *)v21 + 1),
                       v5,
                       v23,
                       v19);
            v17 = v20;
          }
        }
      }
    }
    v5 += 20;
  }
  while ( v5 <= v25 );
  return result;
}

int sub_26BE8(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int result; // r0@3
  const char *v6; // r0@5
  int v7; // r1@5
  int v8; // [sp+4h] [bp-14h]@1

  v8 = a2;
  v2 = a1;
  v3 = a2;
  if ( wireless_get_wps_status(0, &v8) == 3 )
  {
    v4 = 0;
  }
  else
  {
    result = wireless_get_wps_status(v3, &v8);
    if ( !result )
      return result;
    if ( v2 )
    {
      v6 = "wps_5g_ts";
      v7 = 0;
    }
    else
    {
      v6 = "wps_2g_ts";
      v7 = 0;
    }
    istatus_set_intvalue_direct(v6, v7);
    v4 = v3;
  }
  return wireless_wps_stop_signal(v4);
}

void sub_26C50(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  char *v8; // r2@3
  bool v9; // zf@3
  const char *v10; // r1@3
  char *v11; // r0@3
  int v12; // r10@5
  int v13; // r12@7
  int v14; // r3@11
  int v15; // r7@12
  char *v16; // r9@12
  const char *v17; // r8@12
  int v18; // ST08_4@16
  int v19; // r7@17
  char *v20; // r8@17
  char *v21; // r9@19
  int v22; // ST08_4@21
  int v23; // r11@22
  const char *v24; // r9@23
  int v25; // r0@25
  const char *v26; // r1@26
  char *v27; // r7@29
  char *v28; // r1@30
  int v29; // r0@32
  const char *v30; // r10@33
  int v31; // r0@38
  int v32; // r0@38
  const char *v33; // r7@39
  char *v34; // r8@43
  int v35; // r0@45
  const char *v36; // r2@45
  int v37; // ST0C_4@47
  const char *v38; // ST10_4@47
  int v39; // ST1C_4@47
  int v41; // [sp+4h] [bp-44h]@35
  int v42; // [sp+Ch] [bp-3Ch]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a1 )
  {
    v8 = "";
    v9 = a2 == 0;
    v10 = "F7F7F7";
    v11 = "name=\"GUESTS\"";
    if ( v9 )
      v11 = "";
    v12 = a4 & 1;
    if ( !(a4 & 1) )
      v10 = "FFFFFF";
    v13 = a5 == 0;
    if ( !v6 )
      v13 = 0;
    if ( v13 )
      v8 = "display:none;";
    printf(
      "<tr class=\"wl_mbssid_tr\" id=\"BSSID_%d_%d_%d\" %s style=\"background-color:#%s; %s\">",
      v7,
      v6,
      *(_DWORD *)(v5 + 1200),
      v11,
      v10,
      v8);
    v14 = *(_DWORD *)v5;
    if ( v6 )
    {
      v19 = *(_DWORD *)(v5 + 1200);
      v20 = "B4B4B4";
      if ( v14 )
        v20 = "#000000";
      v21 = "5";
      if ( !v19 )
        v21 = "2.4";
      v22 = sub_15A94(1282);
      printf(
        "<td class=\"wl_mbssid_td\" align=\"left\" width=\"160\" style=\"color:%s;\" \t\t\tonclick=\"Clicked_Multibssid(d"
        "ocument.multibssid_fm, document.getElementById('BSSID_%d_%d_%d'));\">%s GHz %s %d</td>",
        v20,
        v7,
        v6,
        v19,
        v21,
        v22,
        v6);
    }
    else
    {
      v15 = *(_DWORD *)(v5 + 1200);
      v16 = "5";
      v17 = "#B4B4B4";
      if ( v14 )
        v17 = "#000000";
      if ( !v15 )
        v16 = "2.4";
      printf(
        "<td class=\"wl_mbssid_td\" align=\"left\" width=\"160\" style=\"color:%s;\" \t\t\tonclick=\"Clicked_Multibssid(d"
        "ocument.multibssid_fm, document.getElementById('BSSID_%d_%d_%d'));\">%s GHz %s</td>",
        v17,
        v7,
        0,
        v15,
        v16,
        sub_15A94(1280),
        v42);
    }
    v23 = *(_DWORD *)(v5 + 1200);
    if ( *(_DWORD *)v5 )
      v24 = "#000000";
    else
      v24 = "#B4B4B4";
    printf(
      "<td class=\"wl_mbssid_td\" align=\"left\" width=\"270\" style=\"color:%s;\" \t\t\tonclick=\"Clicked_Multibssid(doc"
      "ument.multibssid_fm, document.getElementById('BSSID_%d_%d_%d'));\">\t\t\t<span class=\"wl_mbssid_p\" \t\t\t\tstyle"
      "=\"overflow:hidden; text-overflow:ellipsis; white-space:nowrap; width:260px; \t\t\t\tvertical-align:middle;\">%s</span></td>",
      v24,
      v7,
      v6,
      v23,
      sub_149EC(v5 + 4));
    if ( *(_DWORD *)v5 )
      v26 = "#000000";
    else
      v26 = "#B4B4B4";
    printf(
      "<td class=\"wl_mbssid_td\" align=\"left\" width=\"100\" style=\"color:%s;\" \t\t\tonclick=\"Clicked_Multibssid(doc"
      "ument.multibssid_fm, document.getElementById('BSSID_%d_%d_%d'));\">",
      v26,
      v7,
      v6,
      *(_DWORD *)(v5 + 1200));
    if ( !v6 )
    {
      v27 = "2G";
      if ( *(_DWORD *)(v5 + 1200) )
        v28 = "5G";
      else
        v28 = "2G";
      printf(
        "<table class=\"v3_table wl_mbssid_table\" style=\"width:100px; display:none; vertical-align:middle;\" \t\t\t\tid"
        "=\"WPSSTATUS_LINE%s\">",
        v28);
      v29 = printf("<COL width=\"22\"><COL width=\"78\">");
      if ( v12 )
        v30 = "F7F7F7";
      else
        v30 = "FFFFFF";
      if ( *(_DWORD *)(v5 + 1200) )
        v27 = "5G";
      printf(
        "<tr class=\"wl_mbssid_tr\" style=\"background-color:#%s;\" id=\"BSSID_%d_%d_%d_wps\"><td class=\"wl_mbssid_td\">"
        "\t\t\t\t<img src=\"/%s/apply_ani.gif\" style=\"width:18px; height:18px;\"></td>\t\t\t\t<td class=\"wl_mbssid_td\""
        "><p class=\"wl_mbssid_p\" id=\"WPSSTATUS_TEXT%s\"></p></td></tr>",
        v30,
        v7,
        0,
        *(_DWORD *)(v5 + 1200),
        sub_14BF4(v29),
        v27);
      printf("</table>");
    }
    v31 = printf("</td>");
    v32 = sub_14BF4(v31);
    if ( *(_DWORD *)(v5 + 164) )
    {
      v33 = "wifi_lock.png";
    }
    else
    {
      v33 = "wifi_lock.png";
      v32 = wireless_check_8021x_enabled(v5);
      if ( !v32 )
        v33 = "wifi_unlock.png";
    }
    if ( *(_DWORD *)v5 )
      v34 = "";
    else
      v34 = "wl_opacity_30";
    v35 = sub_14BF4(v32);
    v36 = "trigger_off.png";
    if ( *(_DWORD *)v5 )
      v36 = "trigger_on.png";
    v37 = v35;
    v38 = v36;
    v39 = *(_DWORD *)(v5 + 1200);
    printf(
      "<td class=\"wl_mbssid_td\" align=\"right\" style=\"padding-right:5px;\" \t\t\tonclick=\"Clicked_Multibssid(documen"
      "t.multibssid_fm, document.getElementById('BSSID_%d_%d_%d'));\">\t\t\t<img src=\"/%s/%s\" style=\"vertical-align:mi"
      "ddle; display:inline-block; *display:inline; zoom:1;\" class=\"%s\">\t\t\t<img src=\"/%s/%s\" id=\"bssid_%d_%d_%d_"
      "run\" style=\"vertical-align:middle; display:inline-block; *display:inline; zoom:1;\" \t\t\tonclick=\"onclick_bssi"
      "d_onoff(this); ClickEventPropagater(event); return false;\"></td>",
      v7,
      v6);
    printf(
      "<input type=\"hidden\" name=\"bssid_%d_%d_%d_run_hidden\" value=\"%d\">",
      v7,
      v6,
      *(_DWORD *)(v5 + 1200),
      *(_DWORD *)v5,
      v33,
      v34,
      v37,
      v38,
      v7,
      v6,
      v39);
  }
  else
  {
    printf("<tr class=\"wl_mbssid_tr\" name=\"GUESTS\" style=\"background-color:#%s; %s\">");
    printf("<td colspan=\"4\">-</td>");
  }
  printf("</tr>");
}

int sub_26FC0(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  const char *v6; // r2@2
  int result; // r0@4
  int v8; // [sp+0h] [bp-570h]@1
  int v9; // [sp+578h] [bp+8h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sf_strncpy(&v9);
  read_wireless_conf(&v8, &v9);
  if ( v3 == 1 )
    v6 = "ipTIME 5G Guest%d";
  else
    v6 = "ipTIME Guest%d";
  snprintf((char *)(v4 + 4), 0x7Fu, v6, v5);
  *(_DWORD *)(v4 + 1200) = v3;
  *(_DWORD *)(v4 + 1392) = v5;
  result = sub_14520("nouse", 0, v4 + 160, v4 + 164);
  *(_DWORD *)(v4 + 932) = 1;
  *(_DWORD *)(v4 + 156) = 1;
  *(_DWORD *)(v4 + 1384) = 1812;
  return result;
}

int sub_27078(_DWORD *a1, _DWORD *a2, char *a3)
{
  int v3; // r7@1
  _DWORD *v4; // r5@1
  _DWORD *v5; // r4@1
  char *v6; // r6@1
  _DWORD *v7; // r10@1
  int v8; // r8@1
  size_t v9; // ST04_4@3

  v3 = 0;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a2;
  v8 = 0;
  while ( v8 < *v5 )
  {
    if ( v7[54] == *v4 )
    {
      v9 = strlen((const char *)&v5[53 * v8 + 12]);
      if ( strlen(v6) + v9 <= 0x1F5 )
      {
        strcat(v6, (const char *)&v5[53 * v8 + 12]);
        strcat(v6, ",");
      }
      ++v3;
    }
    ++v8;
    v7 += 53;
  }
  if ( *v6 )
    v6[strlen(v6) - 1] = 0;
  return v3;
}

void sub_27140(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@4
  _DWORD *v4; // r7@6
  int *v5; // r5@6
  int v6; // r8@6
  char *v7; // r6@6
  char *v8; // r4@10
  int v9; // r0@14
  char *v10; // r4@15
  int v11; // ST10_4@19
  int v12; // r2@19
  int v13; // r3@19
  int v14; // r1@19
  char *v15; // r2@20
  signed int v16; // r0@22
  char *v17; // r3@26
  char *v18; // r0@26
  char *v19; // ST14_4@29
  int v20; // r3@30
  char *v21; // r1@31
  char *v22; // ST14_4@35
  int v23; // ST10_4@35
  int v24; // r4@35
  int v25; // r0@35
  int *v26; // r4@38
  int v27; // r6@38
  _DWORD *v28; // r10@38
  char *v29; // r5@38
  char *v30; // r7@43
  int v31; // r0@45
  char *v32; // r7@46
  int v33; // r11@50
  int v34; // r2@50
  int v35; // r3@50
  int v36; // r1@50
  char *v37; // r3@51
  signed int v38; // r0@53
  char *v39; // r11@57
  char *v40; // r0@57
  char *v41; // ST10_4@60
  int v42; // r7@61
  char *v43; // r1@62
  char *v44; // ST14_4@66
  int v45; // r11@66
  int v46; // r0@66
  int v48; // r3@71
  int v49; // r2@71
  int v50; // [sp+18h] [bp-7E0h]@6
  int v51; // [sp+18h] [bp-7E0h]@50
  int v52; // [sp+1Ch] [bp-7DCh]@6
  int v53; // [sp+20h] [bp-7D8h]@19
  int v54; // [sp+20h] [bp-7D8h]@50
  int v55; // [sp+24h] [bp-7D4h]@19
  char v56[4]; // [sp+2Ch] [bp-7CCh]@6
  int v57; // [sp+34h] [bp-7C4h]@6
  int v58; // [sp+52Ch] [bp-2CCh]@30
  int v59; // [sp+72Ch] [bp-CCh]@3
  int v60; // [sp+76Ch] [bp-8Ch]@2
  int v61; // [sp+78Ch] [bp-6Ch]@1
  int v62; // [sp+7ACh] [bp-4Ch]@5
  char v63; // [sp+7D0h] [bp-28h]@6

  v2 = a2;
  sub_26820();
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"wl_searchiframe\" style=\"padding:0; margin:0;\">");
  printf("<input type=\"hidden\" name=\"tmenu\" value=\"iframe\">");
  printf("<input type=\"hidden\" name=\"smenu\" value=\"wlsearch\">");
  printf("<input type=\"hidden\" name=\"act\" value=\"\">");
  printf("<input type=\"hidden\" name=\"country\" value=\"\">");
  printf("<input type=\"hidden\" name=\"bw\" value=\"\">");
  printf("<input type=\"hidden\" name=\"wlmode\" value=\"\">");
  printf("</form>");
  printf("</BODY>");
  if ( get_value_post(v2, "wlmode", &v61, 32)
    && get_value_post(v2, "bw", &v60, 32)
    && get_value_post(v2, "country", &v59, 64) )
  {
    v3 = atoi((const char *)&v60);
    atoi((const char *)&v61);
    if ( !get_active_wl() )
      sf_strncpy(&v62);
    wireless_api_start_ap_scan(&v62);
    sleep(0xAu);
    v4 = malloc(0x3530u);
    memset(v4, 0, 0x3530u);
    sf_strncpy(v4 + 2);
    sf_strncpy(v4 + 10);
    wireless_api_get_ap_list(v4);
    wireless_api_stop_ap_scan(&v62);
    qsort(v4 + 12, *v4, 0xD4u, (__compar_fn_t)sub_265A8);
    v52 = wireless_get_channel_list(v4 + 2, v4 + 10, v3, v56);
    v50 = wireless_api_get_best_channel(v56, v52, v4);
    v5 = &v57;
    v6 = 0;
    puts((const char *)0xAu);
    puts("function MakeSearchTable(){");
    puts("var obj = parent.document.getElementById('searchwllist');");
    puts("var lobj = parent.document.getElementById('loadingwllist');");
    puts("var HTMLStr = '<div style=\\\"display:block; width:420px; height:210px; overflow:auto;\\\">';");
    puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" style=\\\"height:210px; overflow:auto; overflow-x:hidden; -ms-overflow-x:hidden; max-height:210px; display:block;\\\">';");
    printf("HTMLStr += '<COL width=\\\"140\\\"><COL width=\\\"%%%%\\\">';\n");
    v7 = &v63 + 20 * v50;
    while ( v6 < v52 )
    {
      if ( *(v5 - 2) == *((_DWORD *)v7 - 489) && *(v5 - 1) == *((_DWORD *)v7 - 488) )
      {
        printf(
          "HTMLStr += '<tr class=\\\"wl_mbssid_tr\\\" style=\\\"height:48px; background-color:#%s;\\\" \t\t\tonclick=\\\""
          "SelectSearchResult(\\'%d.%d\\');\\\" onmouseover=\\\"ChangeToOverColor(this);\\\" onmouseout=\\\"ChangeToOutCo"
          "lor(this);\\\">\t\t\t<td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';\n",
          "F7F7F7");
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v8 = "";
          else
            v8 = "color:#AAA;";
        }
        else
        {
          v8 = "color:#AAA;";
        }
        v9 = sub_15A94(1279);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" style=\\\"cursor:default; margin-left:10px; font-size:16px; %s;\\\">%s %d</p>';",
          v8,
          v9,
          *(v5 - 2));
        puts("HTMLStr += '</td><td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';");
        puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" height=\\\"48\\\"><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\">\t\t\t\t<td class=\\\"wl_mbssid_td\\\">';");
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v10 = "";
          else
            v10 = "color:#AAA;";
        }
        else
        {
          v10 = "color:#AAA;";
        }
        v11 = *v5;
        v53 = sub_4FBA8(*v5, 1000);
        sub_4FC84(v11, 1000);
        v12 = *(v5 - 2);
        v13 = *(v5 - 1);
        v55 = v14;
        if ( v12 == v13 )
        {
          v15 = "";
        }
        else
        {
          if ( v12 <= v13 )
            v16 = 1211;
          else
            v16 = 537;
          v15 = (char *)sub_15A94(v16);
        }
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
          {
            v19 = v15;
            v18 = (char *)sub_15A94(1343);
            v15 = v19;
            v17 = "-";
          }
          else
          {
            v18 = "";
            v17 = "";
          }
        }
        else
        {
          v17 = "";
          v18 = "";
        }
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\" cursor:default; width:260px; white-space:nowrap; tex"
          "t-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%d.%d GHz %s %s %s</p>';\n",
          v10,
          v53,
          v55,
          v15,
          v17,
          v18);
        puts("HTMLStr += '</td></tr><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\"><td class=\\\"wl_mbssid_td\\\">';");
        memset(&v58, 0, 0x200u);
        v20 = sub_27078(&v56[20 * v6], v4, (char *)&v58);
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v21 = "";
          else
            v21 = "color:#AAA;";
        }
        else
        {
          v21 = "color:#AAA;";
        }
        v22 = v21;
        v23 = v20;
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%s(%d%s) : %s';\n",
          v22,
          sub_15A94(1299),
          v23,
          sub_15A94(1298),
          &v58);
        puts("HTMLStr += '</td></tr></table>';");
        puts("HTMLStr += '</td></tr>';");
      }
      ++v6;
      v5 += 5;
    }
    v26 = &v57;
    v27 = 0;
    v28 = v4;
    v29 = &v63 + 20 * v50;
    while ( v27 < v52 )
    {
      if ( *(v26 - 2) != *((_DWORD *)v29 - 489) || *(v26 - 1) != *((_DWORD *)v29 - 488) )
      {
        v48 = *(v26 - 1);
        v49 = *(v26 - 2);
        printf("HTMLStr += '<tr class=\\\"wl_mbssid_tr\\\" style=\\\"height:48px; background-color:#%s;\\\" \t\t\tonclick=\\\"SelectSearchResult(\\'%d.%d\\');\\\" onmouseover=\\\"ChangeToOverColor(this);\\\" onmouseout=\\\"ChangeToOutColor(this);\\\">\t\t\t<td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';\n");
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v30 = "";
          else
            v30 = "color:#AAA;";
        }
        else
        {
          v30 = "color:#AAA;";
        }
        v31 = sub_15A94(1279);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" style=\\\"cursor:default; margin-left:10px; font-size:16px; %s;\\\">%s %d</p>';",
          v30,
          v31,
          *(v26 - 2));
        puts("HTMLStr += '</td><td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';");
        puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" height=\\\"48\\\"><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\">\t\t\t\t<td class=\\\"wl_mbssid_td\\\">';");
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v32 = "";
          else
            v32 = "color:#AAA;";
        }
        else
        {
          v32 = "color:#AAA;";
        }
        v33 = *v26;
        sub_4FC84(v33, 1000);
        v34 = *(v26 - 2);
        v35 = *(v26 - 1);
        v54 = v36;
        if ( v34 == v35 )
        {
          v37 = "";
        }
        else
        {
          if ( v34 <= v35 )
            v38 = 1211;
          else
            v38 = 537;
          v37 = (char *)sub_15A94(v38);
        }
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          v39 = "-";
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
          {
            v41 = v37;
            v40 = (char *)sub_15A94(1343);
            v37 = v41;
          }
          else
          {
            v39 = "";
            v40 = "";
          }
        }
        else
        {
          v39 = "";
          v40 = "";
        }
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%d.%d GHz %s %s %s</p>';\n",
          v32,
          sub_4FBA8(*v26, 1000),
          v54,
          v37,
          v39,
          v40);
        puts("HTMLStr += '</td></tr><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\"><td class=\\\"wl_mbssid_td\\\">';");
        memset(&v58, 0, 0x200u);
        v42 = sub_27078(&v56[20 * v27], v28, (char *)&v58);
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v43 = "";
          else
            v43 = "color:#AAA;";
        }
        else
        {
          v43 = "color:#AAA;";
        }
        v44 = v43;
        v45 = sub_15A94(1299);
        v46 = sub_15A94(1298);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%s(%d%s) : %s';\n",
          v44,
          v45,
          v42,
          v46,
          &v58);
        puts("HTMLStr += '</td></tr></table>';");
        puts("HTMLStr += '</td></tr>';");
      }
      ++v27;
      v26 += 5;
    }
    puts("HTMLStr += '</table></div>';");
    puts("obj.innerHTML = HTMLStr;");
    puts("lobj.style.display = 'none';");
    puts("obj.style.display = 'block';");
    puts("}");
    puts("MakeSearchTable();");
    puts("</script>");
  }
  printf("<script>parent.iframe_searchwireless = true;</script>");
}

void sub_27140(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@4
  _DWORD *v4; // r7@6
  int *v5; // r5@6
  int v6; // r8@6
  char *v7; // r6@6
  char *v8; // r4@10
  int v9; // r0@14
  char *v10; // r4@15
  int v11; // ST10_4@19
  int v12; // r2@19
  int v13; // r3@19
  int v14; // r1@19
  char *v15; // r2@20
  signed int v16; // r0@22
  char *v17; // r3@26
  char *v18; // r0@26
  char *v19; // ST14_4@29
  int v20; // r3@30
  char *v21; // r1@31
  char *v22; // ST14_4@35
  int v23; // ST10_4@35
  int v24; // r4@35
  int v25; // r0@35
  int *v26; // r4@38
  int v27; // r6@38
  _DWORD *v28; // r10@38
  char *v29; // r5@38
  char *v30; // r7@43
  int v31; // r0@45
  char *v32; // r7@46
  int v33; // r11@50
  int v34; // r2@50
  int v35; // r3@50
  int v36; // r1@50
  char *v37; // r3@51
  signed int v38; // r0@53
  char *v39; // r11@57
  char *v40; // r0@57
  char *v41; // ST10_4@60
  int v42; // r7@61
  char *v43; // r1@62
  char *v44; // ST14_4@66
  int v45; // r11@66
  int v46; // r0@66
  int v48; // r3@71
  int v49; // r2@71
  int v50; // [sp+18h] [bp-7E0h]@6
  int v51; // [sp+18h] [bp-7E0h]@50
  int v52; // [sp+1Ch] [bp-7DCh]@6
  int v53; // [sp+20h] [bp-7D8h]@19
  int v54; // [sp+20h] [bp-7D8h]@50
  int v55; // [sp+24h] [bp-7D4h]@19
  char v56[4]; // [sp+2Ch] [bp-7CCh]@6
  int v57; // [sp+34h] [bp-7C4h]@6
  int v58; // [sp+52Ch] [bp-2CCh]@30
  int v59; // [sp+72Ch] [bp-CCh]@3
  int v60; // [sp+76Ch] [bp-8Ch]@2
  int v61; // [sp+78Ch] [bp-6Ch]@1
  int v62; // [sp+7ACh] [bp-4Ch]@5
  char v63; // [sp+7D0h] [bp-28h]@6

  v2 = a2;
  sub_26820();
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"wl_searchiframe\" style=\"padding:0; margin:0;\">");
  printf("<input type=\"hidden\" name=\"tmenu\" value=\"iframe\">");
  printf("<input type=\"hidden\" name=\"smenu\" value=\"wlsearch\">");
  printf("<input type=\"hidden\" name=\"act\" value=\"\">");
  printf("<input type=\"hidden\" name=\"country\" value=\"\">");
  printf("<input type=\"hidden\" name=\"bw\" value=\"\">");
  printf("<input type=\"hidden\" name=\"wlmode\" value=\"\">");
  printf("</form>");
  printf("</BODY>");
  if ( get_value_post(v2, "wlmode", &v61, 32)
    && get_value_post(v2, "bw", &v60, 32)
    && get_value_post(v2, "country", &v59, 64) )
  {
    v3 = atoi((const char *)&v60);
    atoi((const char *)&v61);
    if ( !get_active_wl() )
      sf_strncpy(&v62);
    wireless_api_start_ap_scan(&v62);
    sleep(0xAu);
    v4 = malloc(0x3530u);
    memset(v4, 0, 0x3530u);
    sf_strncpy(v4 + 2);
    sf_strncpy(v4 + 10);
    wireless_api_get_ap_list(v4);
    wireless_api_stop_ap_scan(&v62);
    qsort(v4 + 12, *v4, 0xD4u, (__compar_fn_t)sub_265A8);
    v52 = wireless_get_channel_list(v4 + 2, v4 + 10, v3, v56);
    v50 = wireless_api_get_best_channel(v56, v52, v4);
    v5 = &v57;
    v6 = 0;
    puts((const char *)0xAu);
    puts("function MakeSearchTable(){");
    puts("var obj = parent.document.getElementById('searchwllist');");
    puts("var lobj = parent.document.getElementById('loadingwllist');");
    puts("var HTMLStr = '<div style=\\\"display:block; width:420px; height:210px; overflow:auto;\\\">';");
    puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" style=\\\"height:210px; overflow:auto; overflow-x:hidden; -ms-overflow-x:hidden; max-height:210px; display:block;\\\">';");
    printf("HTMLStr += '<COL width=\\\"140\\\"><COL width=\\\"%%%%\\\">';\n");
    v7 = &v63 + 20 * v50;
    while ( v6 < v52 )
    {
      if ( *(v5 - 2) == *((_DWORD *)v7 - 489) && *(v5 - 1) == *((_DWORD *)v7 - 488) )
      {
        printf(
          "HTMLStr += '<tr class=\\\"wl_mbssid_tr\\\" style=\\\"height:48px; background-color:#%s;\\\" \t\t\tonclick=\\\""
          "SelectSearchResult(\\'%d.%d\\');\\\" onmouseover=\\\"ChangeToOverColor(this);\\\" onmouseout=\\\"ChangeToOutCo"
          "lor(this);\\\">\t\t\t<td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';\n",
          "F7F7F7");
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v8 = "";
          else
            v8 = "color:#AAA;";
        }
        else
        {
          v8 = "color:#AAA;";
        }
        v9 = sub_15A94(1279);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" style=\\\"cursor:default; margin-left:10px; font-size:16px; %s;\\\">%s %d</p>';",
          v8,
          v9,
          *(v5 - 2));
        puts("HTMLStr += '</td><td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';");
        puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" height=\\\"48\\\"><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\">\t\t\t\t<td class=\\\"wl_mbssid_td\\\">';");
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v10 = "";
          else
            v10 = "color:#AAA;";
        }
        else
        {
          v10 = "color:#AAA;";
        }
        v11 = *v5;
        v53 = sub_4FBA8(*v5, 1000);
        sub_4FC84(v11, 1000);
        v12 = *(v5 - 2);
        v13 = *(v5 - 1);
        v55 = v14;
        if ( v12 == v13 )
        {
          v15 = "";
        }
        else
        {
          if ( v12 <= v13 )
            v16 = 1211;
          else
            v16 = 537;
          v15 = (char *)sub_15A94(v16);
        }
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
          {
            v19 = v15;
            v18 = (char *)sub_15A94(1343);
            v15 = v19;
            v17 = "-";
          }
          else
          {
            v18 = "";
            v17 = "";
          }
        }
        else
        {
          v17 = "";
          v18 = "";
        }
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\" cursor:default; width:260px; white-space:nowrap; tex"
          "t-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%d.%d GHz %s %s %s</p>';\n",
          v10,
          v53,
          v55,
          v15,
          v17,
          v18);
        puts("HTMLStr += '</td></tr><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\"><td class=\\\"wl_mbssid_td\\\">';");
        memset(&v58, 0, 0x200u);
        v20 = sub_27078(&v56[20 * v6], v4, (char *)&v58);
        if ( *(v5 - 2) == *((_DWORD *)v7 - 489) )
        {
          if ( *(v5 - 1) == *((_DWORD *)v7 - 488) )
            v21 = "";
          else
            v21 = "color:#AAA;";
        }
        else
        {
          v21 = "color:#AAA;";
        }
        v22 = v21;
        v23 = v20;
        v24 = sub_15A94(1299);
        v25 = sub_15A94(1298);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%s(%d%s) : %s';\n",
          v22,
          v24,
          v23,
          v25,
          &v58);
        puts("HTMLStr += '</td></tr></table>';");
        puts("HTMLStr += '</td></tr>';");
      }
      ++v6;
      v5 += 5;
    }
    v26 = &v57;
    v27 = 0;
    v28 = v4;
    v29 = &v63 + 20 * v50;
    while ( v27 < v52 )
    {
      if ( *(v26 - 2) != *((_DWORD *)v29 - 489) || *(v26 - 1) != *((_DWORD *)v29 - 488) )
      {
        v48 = *(v26 - 1);
        v49 = *(v26 - 2);
        printf("HTMLStr += '<tr class=\\\"wl_mbssid_tr\\\" style=\\\"height:48px; background-color:#%s;\\\" \t\t\tonclick=\\\"SelectSearchResult(\\'%d.%d\\');\\\" onmouseover=\\\"ChangeToOverColor(this);\\\" onmouseout=\\\"ChangeToOutColor(this);\\\">\t\t\t<td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';\n");
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v30 = "";
          else
            v30 = "color:#AAA;";
        }
        else
        {
          v30 = "color:#AAA;";
        }
        v31 = sub_15A94(1279);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" style=\\\"cursor:default; margin-left:10px; font-size:16px; %s;\\\">%s %d</p>';",
          v30,
          v31,
          *(v26 - 2));
        puts("HTMLStr += '</td><td class=\\\"wl_mbssid_td\\\" style=\\\"border-bottom:1px #CCC solid;\\\">';");
        puts("HTMLStr += '<table class=\\\"wl_mbssid_table\\\" height=\\\"48\\\"><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\">\t\t\t\t<td class=\\\"wl_mbssid_td\\\">';");
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v32 = "";
          else
            v32 = "color:#AAA;";
        }
        else
        {
          v32 = "color:#AAA;";
        }
        v33 = *v26;
        v51 = sub_4FBA8(*v26, 1000);
        sub_4FC84(v33, 1000);
        v34 = *(v26 - 2);
        v35 = *(v26 - 1);
        v54 = v36;
        if ( v34 == v35 )
        {
          v37 = "";
        }
        else
        {
          if ( v34 <= v35 )
            v38 = 1211;
          else
            v38 = 537;
          v37 = (char *)sub_15A94(v38);
        }
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          v39 = "-";
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
          {
            v41 = v37;
            v40 = (char *)sub_15A94(1343);
            v37 = v41;
          }
          else
          {
            v39 = "";
            v40 = "";
          }
        }
        else
        {
          v39 = "";
          v40 = "";
        }
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%d.%d GHz %s %s %s</p>';\n",
          v32,
          v51,
          v54,
          v37,
          v39,
          v40);
        puts("HTMLStr += '</td></tr><tr class=\\\"wl_mbssid_tr\\\" height=\\\"24\\\"><td class=\\\"wl_mbssid_td\\\">';");
        memset(&v58, 0, 0x200u);
        v42 = sub_27078(&v56[20 * v27], v28, (char *)&v58);
        if ( *(v26 - 2) == *((_DWORD *)v29 - 489) )
        {
          if ( *(v26 - 1) == *((_DWORD *)v29 - 488) )
            v43 = "";
          else
            v43 = "color:#AAA;";
        }
        else
        {
          v43 = "color:#AAA;";
        }
        v44 = v43;
        v45 = sub_15A94(1299);
        v46 = sub_15A94(1298);
        printf(
          "HTMLStr += '<p class=\\\"wl_mbssid_p\\\" \t\t\tstyle=\\\"cursor:default; width:260px; white-space:nowrap; text"
          "-overflow:ellipsis; overflow:hidden; font-size:12px; %s;\\\">\t\t\t\t%s(%d%s) : %s';\n",
          v44,
          v45,
          v42,
          v46,
          &v58);
        puts("HTMLStr += '</td></tr></table>';");
        puts("HTMLStr += '</td></tr>';");
      }
      ++v27;
      v26 += 5;
    }
    puts("HTMLStr += '</table></div>';");
    puts("obj.innerHTML = HTMLStr;");
    puts("lobj.style.display = 'none';");
    puts("obj.style.display = 'block';");
    puts("}");
    puts("MakeSearchTable();");
    puts("</script>");
  }
  printf("<script>parent.iframe_searchwireless = true;</script>");
}

void sub_278FC(int a1, int a2)
{
  void *v2; // r0@1
  int v3; // r10@1
  int v4; // r4@1
  int *v5; // r6@3
  int v6; // r5@3
  int *v7; // r0@4
  int v8; // r5@6
  int v9; // r0@14
  int *v10; // r1@14
  char *v11; // r7@19
  int v12; // r6@19
  char *v13; // r0@20
  int v14; // r7@22
  int v15; // r0@30
  char *v16; // r1@30
  int *v17; // r11@35
  char *v18; // r8@35
  int v19; // r6@35
  int v20; // r2@35
  int v21; // r1@35
  signed int v22; // r6@35
  char *v23; // r0@37
  int v24; // r1@37
  int v25; // r2@37
  int v26; // r9@42
  int *v27; // r8@43
  signed int v28; // r6@43
  int *v29; // r7@43
  int *v30; // r0@45
  int v31; // r1@45
  int v32; // r2@45
  char v33; // r3@49
  const char *v34; // r0@52
  int *v35; // r1@53
  int v37; // [sp+0h] [bp-31D8h]@37
  int v38; // [sp+0h] [bp-31D8h]@45
  signed int v39; // [sp+Ch] [bp-31CCh]@32
  signed int v40; // [sp+10h] [bp-31C8h]@16
  int v41; // [sp+14h] [bp-31C4h]@1
  char s[5544]; // [sp+18h] [bp-31C0h]@19
  char v43[5544]; // [sp+A40h] [bp-2798h]@35
  int v44; // [sp+15F8h] [bp-1BE0h]@3
  int v45; // [sp+2020h] [bp-11B8h]@43
  int v46; // [sp+2BD8h] [bp-600h]@7
  int v47; // [sp+3148h] [bp-90h]@9
  int v48; // [sp+3150h] [bp-88h]@3
  int v49; // [sp+3170h] [bp-68h]@1
  int v50; // [sp+3190h] [bp-48h]@1
  int v51; // [sp+31A0h] [bp-38h]@1
  int v52; // [sp+31B0h] [bp-28h]@14

  v41 = a2;
  memset(&v51, 0, 0x10u);
  v2 = memset(&v50, 0, 0x10u);
  v3 = wireless_api_get_max_mbss(v2);
  sub_26820();
  sub_26658();
  sub_15988("wirelessconf", "basicsetup");
  if ( get_value_post(v41, "opened", &v49, 32) )
    v4 = atoi((const char *)&v49);
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  v5 = &v44;
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"multibssid_fm\" style=\"padding:0; margin:0;\">");
  v6 = 0;
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"multibssid\">");
  printf("<input type=hidden name=\"action\" value=\"\">");
  printf("<input type=hidden name=\"clicked_bg\" value=\"\">");
  printf("<input type=hidden name=\"clicked_id\" value=\"\">");
  printf("<input type=hidden name=\"opened\" value=\"%d\">", v4);
  printf("<table class=\"v3_table wl_mbssid_table\">");
  printf("<COL WIDTH=\"160\"><COL WIDTH=\"270\"><COL WIDTH=\"100\"><COL WIDTH=\"%%%%\">");
  sf_strncpy(&v48);
  while ( v6 < v3 )
  {
    v7 = v5;
    ++v6;
    v5 += 350;
    memset(v7, 0, 0x578u);
  }
  v8 = 0;
  do
  {
    if ( v8 >= v3 )
    {
      v40 = 1;
      goto LABEL_19;
    }
    memset(&v46, 0, 0x578u);
    if ( !read_mbssid_conf(v8, &v46) )
    {
      v40 = 1;
      goto LABEL_19;
    }
    if ( v8 && !v47 )
      v47 = v8;
    if ( v47 < 0 || v47 > v3 )
      v47 = v8;
    v9 = v8;
    v10 = &v44 + 350 * v47;
    *(&v52 + v47 - 8) = v8++;
    read_mbssid_conf(v9, v10);
    *(&v52 + 350 * v47 - 1426) = v47;
  }
  while ( !wireless_get_multibridge_enable(0) );
  v40 = 0;
LABEL_19:
  sf_strncpy(&v48);
  v11 = s;
  v12 = 0;
  while ( v12 < v3 )
  {
    v13 = v11;
    ++v12;
    v11 += 1400;
    memset(v13, 0, 0x578u);
  }
  v14 = 0;
  do
  {
    if ( v14 >= v3 )
    {
      v39 = 1;
      goto LABEL_35;
    }
    memset(&v46, 0, 0x578u);
    if ( !read_mbssid_conf(v14 + 0x10000, &v46) )
    {
      v39 = 1;
      goto LABEL_35;
    }
    if ( v14 && !v47 )
      v47 = v14;
    if ( v47 < 0 || v47 > v3 )
      v47 = v14;
    v15 = v14 + 0x10000;
    v16 = &s[1400 * v47];
    *(&v52 + v47 - 4) = v14++;
    read_mbssid_conf(v15, v16);
    *(&v52 + 350 * v47 - 2826) = v47;
  }
  while ( !wireless_get_multibridge_enable(1) );
  v39 = 0;
LABEL_35:
  sub_26C50((int)s, 0, v51, 0, v4);
  sub_26C50((int)&v44, 0, v50, 1, v4);
  v17 = &v51;
  v18 = v43;
  printf(
    "<tr class=\"wl_mbssid_tr\" style=\"background-color:#%s;\" \t\tonclick=\"toggle_guests(document.getElementsByName('G"
    "UESTS'), document.getElementById('timg'));\">",
    "FFFFFF");
  printf("<td colspan=\"4\" class=\"wl_mbssid_td\">");
  v21 = v19;
  v22 = 1;
  printf(
    "<p style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\">%s</p>\t\t<i"
    "mg id=\"timg\" src=\"/%s/menu_list_%s.png\" \t\tstyle=\"display:inline-block; *display:inline; zoom:1; height:14px; "
    "vertical-align:middle; margin-left:5px; width:16px;\">",
    v21,
    sub_14BF4(sub_15A94(1300)));
  printf("</td></tr>");
  while ( 1 )
  {
    v26 = v22 + 2;
    if ( v22 >= v3 )
      break;
    if ( v39 )
    {
      if ( !*((_DWORD *)v18 + 48) )
      {
        *((_DWORD *)v18 + 48) = v22;
        *(_DWORD *)v18 = 1;
        v17[1] = v14;
        snprintf(&s[1400 * v22 + 4], 0x7Fu, "ipTIME 5G Guest%d", *((_DWORD *)v18 + 48));
      }
      v37 = v4;
      v24 = v22;
      v23 = &s[1400 * v22];
      v25 = v17[1];
    }
    else
    {
      v23 = 0;
      v37 = v4;
      v24 = v22;
      v25 = 0;
    }
    ++v22;
    ++v17;
    v18 += 1400;
    sub_26C50((int)v23, v24, v25, v26, v37);
  }
  v27 = &v50;
  v28 = 1;
  v29 = &v45;
  while ( v28 < v3 )
  {
    if ( v40 )
    {
      if ( !v29[48] )
      {
        v29[48] = v28;
        *v29 = 0;
        v27[1] = v8;
        snprintf((char *)&v44 + 1400 * v28 + 4, 0x7Fu, "ipTIME Guest%d", v29[48]);
      }
      v38 = v4;
      v30 = &v44 + 350 * v28;
      v32 = v27[1];
      v31 = v28;
    }
    else
    {
      v30 = 0;
      v38 = v4;
      v31 = v28;
      v32 = 0;
    }
    v33 = v26;
    ++v28;
    ++v26;
    ++v27;
    v29 += 350;
    sub_26C50((int)v30, v31, v32, v33, v38);
  }
  printf("</table>");
  if ( get_value_post(v41, "action", &v49, 32) )
  {
    if ( !v39 || !get_value_post(v41, "clicked_id", &v49, 32) )
    {
      printf(
        "\n<script>Clicked_Multibssid(document.multibssid_fm, document.getElementById('%s%d'));</script>\n",
        "BSSID_0_0_",
        1);
      goto LABEL_61;
    }
    v34 = "\n<script>Clicked_Multibssid(document.multibssid_fm, document.getElementById('%s'));</script>\n";
    v35 = &v49;
  }
  else
  {
    v34 = "<script>init_multibssid(%d);</script>";
    if ( v4 )
      v35 = (int *)216;
    else
      v35 = (int *)72;
  }
  printf(v34, v35);
LABEL_61:
  printf("</BODY>");
  printf("<script>parent.iframe_multibssid = true;</script>");
}

void sub_27F54(int a1, int a2)
{
  int v2; // r4@1
  const char *v3; // r0@1
  int result; // r0@2
  int v5; // r10@4
  signed int v6; // r5@6
  int v7; // r11@10
  int v8; // r8@10
  int v9; // r6@10
  int v10; // r5@18
  unsigned int v11; // r0@25
  unsigned int v12; // r0@28
  unsigned int v13; // r0@31
  char *v14; // r3@35
  unsigned int v15; // r2@36
  bool v16; // cf@36
  bool v17; // zf@36
  signed int v18; // r5@39
  signed int v19; // t1@39
  char *v20; // r0@40
  char *v21; // r0@45
  unsigned int v22; // r0@48
  char *v23; // r0@52
  int v24; // r7@83
  int v25; // r7@86
  int v26; // r0@89
  int v27; // r2@89
  int *v28; // r3@89
  unsigned int v29; // r0@95
  unsigned int v30; // r0@98
  unsigned int v31; // r0@103
  unsigned int v32; // r0@106
  unsigned int v33; // r0@109
  int v34; // r7@112
  unsigned int v35; // r0@115
  int v36; // r0@119
  int v37; // r0@124
  int v38; // r6@125
  int v39; // r11@126
  unsigned int v40; // r5@128
  int v41; // r7@129
  int v42; // r8@129
  int v43; // r0@136
  int v44; // r7@138
  int v45; // r7@139
  int v46; // r6@142
  int v47; // r0@152
  int v48; // r1@152
  char *v49; // r2@152
  int v50; // r0@159
  int v51; // r0@161
  signed int v52; // r1@164
  int v53; // r6@167
  char *v54; // r1@168
  __int64 v55; // r8@172
  bool v56; // zf@173
  int v57; // r0@177
  signed int v58; // r3@180
  const char *v59; // r0@176
  signed int v60; // r1@185
  unsigned int v61; // r2@189
  bool v62; // cf@189
  bool v63; // zf@189
  const char *v64; // r0@200
  int c; // [sp+4h] [bp-1234h]@127
  char v66; // [sp+8h] [bp-1230h]@12
  int v67; // [sp+Ch] [bp-122Ch]@15
  int v68; // [sp+8Ch] [bp-11ACh]@83
  int v69; // [sp+90h] [bp-11A8h]@18
  int v70; // [sp+94h] [bp-11A4h]@18
  unsigned int v71; // [sp+A4h] [bp-1194h]@29
  int v72; // [sp+A8h] [bp-1190h]@34
  int v73; // [sp+ACh] [bp-118Ch]@34
  int v74; // [sp+138h] [bp-1100h]@58
  int v75; // [sp+1B0h] [bp-1088h]@75
  int v76; // [sp+1BCh] [bp-107Ch]@77
  int v77; // [sp+1C0h] [bp-1078h]@81
  int v78; // [sp+1CCh] [bp-106Ch]@79
  int v79; // [sp+3A4h] [bp-E94h]@86
  unsigned int v80; // [sp+3ACh] [bp-E8Ch]@26
  int v81; // [sp+3B0h] [bp-E88h]@65
  int v82; // [sp+3B4h] [bp-E84h]@68
  unsigned int v83; // [sp+3B8h] [bp-E80h]@104
  unsigned int v84; // [sp+3C0h] [bp-E78h]@107
  int v85; // [sp+3D4h] [bp-E64h]@89
  unsigned int v86; // [sp+420h] [bp-E18h]@96
  signed int v87; // [sp+428h] [bp-E10h]@101
  unsigned int v88; // [sp+42Ch] [bp-E0Ch]@99
  int v89; // [sp+434h] [bp-E04h]@101
  int v90; // [sp+4B8h] [bp-D80h]@14
  unsigned int v91; // [sp+4C4h] [bp-D74h]@23
  int v92; // [sp+4C8h] [bp-D70h]@120
  char v93; // [sp+4D0h] [bp-D68h]@47
  char v94; // [sp+4F0h] [bp-D48h]@52
  unsigned int v95; // [sp+570h] [bp-CC8h]@49
  unsigned int v96; // [sp+574h] [bp-CC4h]@110
  int v97; // [sp+578h] [bp-CC0h]@71
  int v98; // [sp+57Ch] [bp-CBCh]@122
  int v99; // [sp+580h] [bp-CB8h]@9
  int v100; // [sp+584h] [bp-CB4h]@152
  unsigned int v101; // [sp+604h] [bp-C34h]@179
  int v102; // [sp+608h] [bp-C30h]@146
  int v103; // [sp+60Ch] [bp-C2Ch]@154
  int v104; // [sp+61Ch] [bp-C1Ch]@172
  int v105; // [sp+620h] [bp-C18h]@167
  int v106; // [sp+624h] [bp-C14h]@167
  char v107; // [sp+6B0h] [bp-B88h]@172
  int v108; // [sp+728h] [bp-B10h]@177
  int v109; // [sp+734h] [bp-B04h]@177
  int v110; // [sp+738h] [bp-B00h]@177
  int v111; // [sp+744h] [bp-AF4h]@177
  int v112; // [sp+91Ch] [bp-91Ch]@179
  int v113; // [sp+924h] [bp-914h]@159
  int v114; // [sp+928h] [bp-910h]@159
  int v115; // [sp+92Ch] [bp-90Ch]@161
  int v116; // [sp+930h] [bp-908h]@177
  int v117; // [sp+938h] [bp-900h]@177
  int v118; // [sp+94Ch] [bp-8ECh]@157
  int v119; // [sp+998h] [bp-8A0h]@177
  int v120; // [sp+9A4h] [bp-894h]@177
  int v121; // [sp+A3Ch] [bp-7FCh]@177
  int v122; // [sp+A40h] [bp-7F8h]@177
  int v123; // [sp+A48h] [bp-7F0h]@167
  int v124; // [sp+A68h] [bp-7D0h]@167
  int v125; // [sp+AECh] [bp-74Ch]@177
  int v126; // [sp+AF0h] [bp-748h]@142
  int v127; // [sp+AF8h] [bp-740h]@4
  int v128; // [sp+C0Ch] [bp-62Ch]@181
  int v129; // [sp+C58h] [bp-5E0h]@180
  int v130; // [sp+E7Ch] [bp-3BCh]@10
  char v131; // [sp+1000h] [bp-238h]@153
  int v132; // [sp+107Ch] [bp-1BCh]@10
  int v133; // [sp+10FCh] [bp-13Ch]@2
  char v134; // [sp+1140h] [bp-F8h]@168
  int v135; // [sp+117Ch] [bp-BCh]@167
  char v136; // [sp+11BBh] [bp-7Dh]@35
  int v137; // [sp+11BCh] [bp-7Ch]@35
  int v138; // [sp+11DCh] [bp-5Ch]@4
  int v139; // [sp+11FCh] [bp-3Ch]@148

  v2 = a2;
  v3 = (const char *)get_pvalue(a1, "wlmode");
  if ( !v3 )
  {
    result = get_value_post(v2, "wlmode", &v133, 128);
    if ( !result )
      return result;
    v3 = (const char *)&v133;
  }
  v5 = atoi(v3);
  sf_strncpy(&v138);
  get_si("hw", &v127);
  memset(&v133, 0, 0x80u);
  if ( !get_value_post(v2, "action", &v133, 128) )
    goto LABEL_9;
  if ( !strcmp((const char *)&v133, "changebssid") )
  {
    v6 = 2;
    goto LABEL_137;
  }
  if ( strcmp((const char *)&v133, "allsubmit") )
  {
    if ( strcmp((const char *)&v133, "bssidonoff") )
    {
LABEL_9:
      v6 = 1;
      read_wireless_conf(&v99, &v138);
LABEL_206:
      v46 = 0;
LABEL_146:
      v45 = v102;
      if ( v102 )
        v45 = 0;
      else
        wireless_api_get_current_channelspec(&v138, &v139);
      goto LABEL_149;
    }
    if ( !get_value_post(v2, "wlmode", &v132, 128) )
      goto LABEL_208;
    v38 = atoi((const char *)&v132);
    if ( !get_value_post(v2, "sidx", &v132, 128) )
      goto LABEL_208;
    v39 = atoi((const char *)&v132);
    if ( !get_value_post(v2, "uiidx", &v132, 128) )
      goto LABEL_208;
    c = atoi((const char *)&v132);
    if ( !get_value_post(v2, "run", &v132, 128) )
      goto LABEL_208;
    v40 = atoi((const char *)&v132);
    if ( v40 > 1 )
      goto LABEL_208;
    sf_strncpy(&v137);
    sub_26BE8(v38, (int)&v137);
    v41 = v39 + (v38 << 16);
    v42 = read_mbssid_conf(v41, &v66);
    if ( !v42 )
      sub_26FC0(v38, (int)&v66, c);
    *(_DWORD *)&v66 = v40;
    if ( v42 )
    {
      if ( !v39 )
      {
        set_active_wl(&v137, v38);
        write_wireless_conf(&v66, &v137);
        set_wireless_conf(&v66, &v137);
LABEL_136:
        v43 = signal_start('f');
        signal_save(v43);
LABEL_208:
        v6 = 5;
        goto LABEL_137;
      }
    }
    else
    {
      wireless_api_add_mbss(v41, &v66, 1);
    }
    wireless_api_run_mbss(v41, v40, 1);
    goto LABEL_136;
  }
  if ( !get_value_post(v2, "wlmode", &v130, 128) )
    goto LABEL_210;
  v7 = atoi((const char *)&v130);
  v8 = wireless_api_get_max_mbss(v7);
  sf_strncpy(&v132);
  sub_26BE8(v7, (int)&v132);
  sf_strncpy(&v132);
  sub_26BE8(v7, (int)&v132);
  sf_strncpy(&v132);
  memset(&v130, 0, 0x200u);
  v9 = get_value_post(v2, "sidx", &v130, 512);
  if ( v9 )
  {
    v9 = atoi((const char *)&v130);
    if ( v9 >= v8 )
      goto LABEL_210;
  }
  if ( !read_mbssid_conf(v9 + (v7 << 16), &v66) )
    memset(&v66, 0, 0x578u);
  v90 = v7;
  memset(&v130, 0, 0x200u);
  if ( !get_value_post(v2, "ssid", &v130, 512) )
    goto LABEL_210;
  sf_strncpy(&v67);
  if ( v9 )
  {
    v10 = get_value_post(v2, "mbsspolicy", &v130, 512);
    if ( v10 )
    {
      v11 = atoi((const char *)&v130);
      v10 = v11;
      if ( v11 > 1 )
        goto LABEL_210;
      v80 = v11;
    }
  }
  else if ( get_value_post(v2, "autochannel", &v130, 512) && atoi((const char *)&v130) )
  {
    v70 = 0;
    v69 = 0;
    v10 = 0;
  }
  else
  {
    if ( get_value_post(v2, "ctlchannel", &v130, 512) )
      v69 = atoi((const char *)&v130);
    if ( get_value_post(v2, "cntchannel", &v130, 512) )
      v70 = atoi((const char *)&v130);
    v10 = 0;
    v91 = 0;
  }
  if ( get_value_post(v2, "broadcast", &v130, 512) )
  {
    v12 = atoi((const char *)&v130);
    v10 = v12;
    if ( v12 > 1 )
      goto LABEL_210;
    v71 = v12;
  }
  if ( !get_value_post(v2, "useenterprise", &v130, 512) )
    goto LABEL_213;
  v13 = atoi((const char *)&v130);
  v10 = v13;
  if ( v13 > 1 )
    goto LABEL_210;
  if ( v13 )
  {
    if ( !get_value_post(v2, "enterpriselist", &v130, 512) )
      goto LABEL_210;
    sub_14520(&v130, 0, &v72, &v73);
    if ( !get_value_post(v2, "radiusserver", &v130, 512) )
      goto LABEL_210;
    sf_strncpy(&v137);
    v14 = &v136;
    while ( 1 )
    {
      v19 = (unsigned __int8)(v14++)[1];
      v18 = v19;
      if ( !v19 )
        break;
      v15 = (unsigned __int8)(v18 - 48);
      v16 = (unsigned int)v18 >= 0x2E;
      v17 = v18 == 46;
      if ( v18 != 46 )
      {
        v16 = v15 >= 9;
        v17 = v15 == 9;
      }
      if ( !v17 && v16 )
        goto LABEL_210;
    }
    v20 = (char *)&v137;
    while ( 1 )
    {
      v21 = strtok(v20, ".");
      if ( !v21 )
        break;
      ++v18;
      if ( (unsigned int)atoi(v21) > 0xFF )
        v20 = (char *)1;
      else
        v20 = (char *)(v18 > 4);
      if ( v20 )
        goto LABEL_210;
    }
    if ( v18 != 4 )
      goto LABEL_210;
    sf_strncpy(&v93);
    if ( get_value_post(v2, "radiusport", &v130, 512) )
    {
      v22 = atoi((const char *)&v130);
      v10 = v22;
      if ( v22 >= 0x10000 )
        goto LABEL_210;
      v95 = v22;
    }
    else
    {
      v10 = 1;
      v95 = 1812;
    }
    if ( !get_value_post(v2, "radiussecret", &v130, 512) )
      goto LABEL_210;
    v23 = &v94;
  }
  else
  {
LABEL_213:
    if ( !get_value_post(v2, "personallist", &v130, 512) || strstr((const char *)&v130, "wep") )
      goto LABEL_210;
    sub_14520(&v130, 0, &v72, &v73);
    if ( (unsigned int)(v73 - 3) > 2 )
      goto LABEL_60;
    if ( !get_value_post(v2, "wpapsk", &v130, 512) )
      goto LABEL_210;
    v23 = (char *)&v74;
  }
  sf_strncpy(v23);
LABEL_60:
  if ( v9 )
  {
    if ( get_value_post(v2, "qosenable", &v130, 512) )
      v10 = atoi((const char *)&v130);
    if ( v10 )
    {
      if ( get_value_post(v2, "txrate", &v130, 512) )
        v81 = 1000 * atoi((const char *)&v130);
      else
        v81 = 0;
      if ( get_value_post(v2, "rxrate", &v130, 512) )
        v82 = 1000 * atoi((const char *)&v130);
      else
        v82 = 0;
    }
  }
  if ( !get_value_post(v2, "uiidx", &v130, 128) )
    goto LABEL_210;
  v97 = atoi((const char *)&v130);
  if ( v9 )
  {
    wireless_api_add_mbss(v9 + (v7 << 16), &v66, 1);
LABEL_124:
    v37 = signal_start('f');
    signal_save(v37);
    goto LABEL_210;
  }
  set_active_wl(&v132, v7);
  write_wireless_conf(&v66, &v132);
  set_wireless_conf(&v66, &v132);
  memset(&v66, 0, 0x578u);
  read_wireless_conf(&v66, &v132);
  if ( get_value_post(v2, "txpower", &v130, 512) )
    v75 = atoi((const char *)&v130);
  if ( get_value_post(v2, "rts", &v130, 512) )
    v76 = atoi((const char *)&v130);
  if ( get_value_post(v2, "beacon", &v130, 512) )
    v78 = atoi((const char *)&v130);
  if ( get_value_post(v2, "fragmentation", &v130, 512) )
    v77 = atoi((const char *)&v130);
  if ( get_value_post(v2, "wirelessmode", &v130, 512) )
  {
    v24 = v68;
    v68 = atoi((const char *)&v130);
    if ( v24 != v68 )
      v69 = 0;
  }
  if ( get_value_post(v2, "channelwidth", &v130, 512) )
  {
    v25 = v79;
    v79 = atoi((const char *)&v130);
    if ( v25 != v79 )
      v69 = 0;
  }
  if ( get_value_post(v2, "country", &v130, 512) )
  {
    v26 = strcmp((const char *)&v130, (const char *)&v85);
    if ( v26 )
    {
      v27 = 0;
      v28 = &v69;
    }
    if ( v26 )
      *v28 = v27;
    sf_strncpy(&v85);
  }
  if ( get_value_post(v2, "wpsmode", &v130, 512) )
  {
    v29 = atoi((const char *)&v130);
    if ( v29 <= 1 )
      v86 = v29;
  }
  if ( get_value_post(v2, "wpsnoti", &v130, 512) )
  {
    v30 = atoi((const char *)&v130);
    if ( v30 <= 1 )
      v88 = v30;
    if ( v88 )
    {
      v87 = 1;
      strcpy((char *)&v89, "YSM8V3Q23LWW");
    }
  }
  if ( get_value_post(v2, "wmm", &v130, 512) )
  {
    v31 = atoi((const char *)&v130);
    if ( v31 <= 1 )
      v83 = v31;
  }
  if ( get_value_post(v2, "ldpc", &v130, 512) )
  {
    v32 = atoi((const char *)&v130);
    if ( v32 <= 1 )
      v84 = v32;
  }
  if ( get_value_post(v2, "phywatchdog", &v130, 512) )
  {
    v33 = atoi((const char *)&v130);
    if ( v33 <= 1 )
      v96 = v33;
  }
  if ( get_value_post(v2, "channelwidth", &v130, 512) )
  {
    v34 = v79;
    v79 = atoi((const char *)&v130);
    if ( v79 != v34 )
      v69 = 0;
  }
  if ( !get_value_post(v2, "dynchannel", &v130, 512) )
    goto LABEL_121;
  v35 = atoi((const char *)&v130);
  if ( v35 <= 1 )
    v91 = v35;
  if ( !v91 || (v69 = 0, v70 = 0, !get_value_post(v2, "dcsperiodhour", &v130, 512)) )
  {
LABEL_121:
    if ( get_value_post(v2, "mimoant", &v130, 512) )
      v98 = atoi((const char *)&v130);
    write_wireless_conf(&v66, &v132);
    set_wireless_conf(&v66, &v132);
    goto LABEL_124;
  }
  v36 = atoi((const char *)&v130);
  if ( (unsigned int)(v36 - 1) <= 0x63 )
  {
    v92 = 60 * v36;
    goto LABEL_121;
  }
LABEL_210:
  v6 = 3;
LABEL_137:
  if ( !get_value_post(v2, "sidx", &v133, 128) )
  {
    read_wireless_conf(&v99, &v138);
    goto LABEL_206;
  }
  v44 = atoi((const char *)&v133);
  if ( v44 >= wireless_api_get_max_mbss(v44) )
    v45 = 0;
  else
    v45 = v44 & ~(v44 >> 31);
  if ( read_mbssid_conf(v45 + (v5 << 16), &v99) )
  {
    v46 = v126;
  }
  else
  {
    memset(&v99, 0, 0x578u);
    get_value_post(v2, "uiidx", &v133, 128);
    v46 = atoi((const char *)&v133);
    sub_26FC0(v5, (int)&v99, v46);
  }
  if ( !v45 )
    goto LABEL_146;
LABEL_149:
  sub_15988("wirelessconf", "basicsetup");
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"hiddenwlsetup_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"hiddenwlsetup\">");
  printf("<input type=hidden name=\"wlmode\" value=\"%d\">", v5);
  printf("<input type=hidden name=\"wlmodetxt\" value=\"%s\">");
  printf("<input type=hidden name=\"action\" value=\"\">");
  printf("<input type=hidden name=\"sidx\" value=\"%d\">", v45);
  if ( v45 && !v126 )
    v126 = v46;
  printf("<input type=hidden name=\"uiidx\" value=\"%d\">", v126);
  v47 = sub_149EC(&v100);
  printf("<input type=hidden name=\"ssid\" value=\"%s\">", v47);
  printf("<input type=hidden name=\"autochannel\" value=\"%d\">");
  printf("<input type=hidden name=\"ctlchannel\" value=\"%d\">");
  if ( v102 )
    v48 = v103;
  else
    v49 = &v131;
  if ( !v102 )
    v48 = *((_DWORD *)v49 + 128);
  printf("<input type=hidden name=\"cntchannel\" value=\"%d\">", v48, v49);
  if ( check_wifi_regulation(&v118) )
    printf("<input type=hidden name=rwarning value=l>");
  printf("<input type=hidden name=\"run\" value=\"%d\">", v99);
  printf("<input type=hidden name=\"mbsspolicy\" value=\"%d\">", v113);
  v50 = v114;
  if ( v114 )
    v50 = sub_4FBA8(v114, 1000);
  printf("<input type=hidden name=\"txrate\" value=\"%d\">", v50);
  v51 = v115;
  if ( v115 )
    v51 = sub_4FBA8(v115, 1000);
  printf("<input type=hidden name=\"rxrate\" value=\"%d\">", v51);
  if ( v114 )
  {
    v52 = 1;
  }
  else
  {
    v52 = v115;
    if ( v115 )
      v52 = 1;
  }
  printf("<input type=hidden name=\"qosenable\" value=\"%d\">", v52);
  v53 = wireless_check_8021x_enabled(&v99);
  memset(&v135, 0, 0x40u);
  sub_14754(v105, v106, &v135);
  printf("<input type=hidden name=\"useenterprise\" value=\"%d\">", v53);
  printf("<input type=hidden name=\"radiusserver\" value=\"%s\">", &v123);
  printf("<input type=hidden name=\"radiussecret\" value=\"");
  sub_14AE8(&v124);
  printf("\">");
  printf("<input type=hidden name=\"radiusport\" value=\"%d\">");
  printf("<input type=hidden name=\"enterpriselist\" value=\"%s\">");
  if ( v53 )
    v54 = "nouse";
  else
    v54 = &v134;
  if ( !v53 )
    v54 += 60;
  LODWORD(v55) = v6 == 1;
  printf("<input type=hidden name=\"personallist\" value=\"%s\">", v54);
  HIDWORD(v55) = v6 == 3;
  printf("<input type=hidden name=\"wpapsk\" value=\"");
  sub_14AE8(&v107);
  printf("\">");
  printf("<input type=hidden name=\"broadcast\" value=\"%d\">", v104);
  if ( !v55 )
  {
    v56 = v6 == 2;
    if ( v6 == 2 )
      v56 = v45 == 0;
    if ( !v56 )
    {
      get_value_post(v2, "txpower", &v133, 128);
      printf("<input type=hidden name=\"txpower\" value=\"%s\">", &v133);
      get_value_post(v2, "beacon", &v133, 128);
      printf("<input type=hidden name=\"beacon\" value=\"%s\">", &v133);
      get_value_post(v2, "rts", &v133, 128);
      printf("<input type=hidden name=\"rts\" value=\"%s\">", &v133);
      get_value_post(v2, "wpsmode", &v133, 128);
      printf("<input type=hidden name=\"wpsmode\" value=\"%s\">", &v133);
      get_value_post(v2, "wpsnoti", &v133, 128);
      printf("<input type=hidden name=\"wpsnoti\" value=\"%s\">", &v133);
      get_value_post(v2, "fragmentation", &v133, 128);
      printf("<input type=hidden name=\"fragmentation\" value=\"%s\">", &v133);
      get_value_post(v2, "ldpc", &v133, 128);
      printf("<input type=hidden name=\"ldpc\" value=\"%s\">", &v133);
      get_value_post(v2, "wmm", &v133, 128);
      printf("<input type=hidden name=\"wmm\" value=\"%s\">", &v133);
      get_value_post(v2, "phywatchdog", &v133, 128);
      printf("<input type=hidden name=\"phywatchdog\" value=\"%s\">", &v133);
      get_value_post(v2, "dynchannel", &v133, 128);
      printf("<input type=hidden name=\"dynchannel\" value=\"%s\">", &v133);
      get_value_post(v2, "dcsperiodhour", &v133, 128);
      printf("<input type=hidden name=\"dcsperiodhour\" value=\"%s\">", &v133);
      get_value_post(v2, "wirelessmode", &v133, 128);
      printf("<input type=hidden name=\"wirelessmode\" value=\"%s\">", &v133);
      get_value_post(v2, "country", &v133, 128);
      printf("<input type=hidden name=\"country\" value=\"%s\">", &v133);
      get_value_post(v2, "channelwidth", &v133, 128);
      printf("<input type=hidden name=\"channelwidth\" value=\"%s\">", &v133);
      get_value_post(v2, "mimoant", &v133, 128);
      v59 = "<input type=hidden name=\"mimoant\" value=\"%s\">";
LABEL_184:
      printf(v59);
      goto LABEL_185;
    }
  }
  printf("<input type=hidden name=\"txpower\" value=\"%d\">", v108);
  printf("<input type=hidden name=\"beacon\" value=\"%d\">", v111);
  printf("<input type=hidden name=\"rts\" value=\"%d\">", v109);
  printf("<input type=hidden name=\"wpsmode\" value=\"%d\">", v119);
  printf("<input type=hidden name=\"wpsnoti\" value=\"%d\">", v120);
  printf("<input type=hidden name=\"fragmentation\" value=\"%d\">", v110);
  printf("<input type=hidden name=\"ldpc\" value=\"%d\">", v117);
  printf("<input type=hidden name=\"wmm\" value=\"%d\">", v116);
  printf("<input type=hidden name=\"phywatchdog\" value=\"%d\">", v125);
  printf("<input type=hidden name=\"dynchannel\" value=\"%d\">", v121);
  v57 = v122;
  if ( v122 )
    v57 = sub_4FBA8(v122, 60);
  printf("<input type=hidden name=\"dcsperiodhour\" value=\"%d\">", v57);
  printf("<input type=hidden name=\"wirelessmode\" value=\"%d\">", v101);
  printf("<input type=hidden name=\"country\" value=\"%s\">", &v118);
  printf("<input type=hidden name=\"channelwidth\" value=\"%d\">", v112);
  if ( v5 == 1 )
    v58 = v129;
  else
    v58 = v128;
  if ( v58 > 2 )
  {
    v59 = "<input type=hidden name=\"mimoant\" value=\"%d\">";
    goto LABEL_184;
  }
LABEL_185:
  v60 = v112;
  if ( v112 )
  {
    if ( v112 != 80 )
    {
      if ( v112 != 40 )
        goto LABEL_214;
      v61 = v101 - 4;
      v62 = v101 >= 9;
      v63 = v101 == 9;
      if ( v101 != 9 )
      {
        v62 = v61 >= 2;
        v63 = v61 == 2;
      }
      if ( !v63 && v62 )
      {
LABEL_214:
        if ( v101 - 1 <= 2 )
          v60 = 20;
      }
    }
  }
  else
  {
    v60 = 40;
  }
  printf("<input type=hidden name=\"realchanwidth\" value=\"%d\">", v60);
  printf("</form>");
  printf("</BODY>");
  result = printf("<script>parent.iframe_hiddenwlsetup = true;</script>");
  if ( v6 == 1 )
    return printf("<script><inet_hiddensetup('%s', false, 'true', true)");
  if ( v6 == 2 )
    return printf("<script>\ninit_hiddensetup('%s', false, true, %s);\n</script>\n");
  if ( v6 == 3 )
  {
    v64 = "<script>\ninit_hiddensetup('%s', true, true, true); refresh_wps_view('%s', %s);\n</script>\n";
  }
  else
  {
    if ( v6 != 5 )
      return result;
    v64 = "<script>\ninit_hiddensetup('%s', true, false, false); refresh_wps_view('%s', %s);\n</script>\n";
  }
  printf(v64);
}

void sub_295A4(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r4@1
  int v4; // r1@3
  const char *v5; // r0@7
  int v6; // r0@12
  int v8; // [sp+0h] [bp-68h]@1
  char v9; // [sp+20h] [bp-48h]@3
  char s; // [sp+40h] [bp-28h]@5
  int v11; // [sp+44h] [bp-24h]@12
  int v12; // [sp+48h] [bp-20h]@12
  char v13; // [sp+4Ch] [bp-1Ch]@6

  v2 = a2;
  v3 = get_value_post(a2, "wlmode", &v8, 32);
  if ( v3 )
    v3 = strcmp((const char *)&v8, "2g") != 0;
  sf_strncpy(&v9);
  memset(&v8, 0, 0x20u);
  if ( get_value_post(v2, "action", &v8, 32) )
  {
    sub_26BE8(v3, (int)&v9);
    v4 = strcmp((const char *)&v8, "start");
    if ( !v4 )
    {
      memset(&s, 0, 0xCu);
      if ( v3 )
      {
        if ( !wireless_get_wps_status("eth2", &v13) )
        {
LABEL_12:
          v12 = 0;
          v11 = 0;
          wireless_reset_wps_status(&v9);
          write_wps_conf(&v9, &s);
          v6 = wireless_set_wps_src(&v9);
          signal_wps(v6);
          goto LABEL_13;
        }
        v5 = "eth2";
      }
      else
      {
        if ( !wireless_get_wps_status("eth1", &v13) )
          goto LABEL_12;
        v5 = "eth1";
      }
      wireless_wps_stop_signal(v5);
      goto LABEL_12;
    }
  }
LABEL_13:
  printf(
    "<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">",
    v4);
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"wpssubmit_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"wpssubmit\">");
  printf("<input type=hidden name=\"wlmode\" value=\"%d\">", v3);
  printf("<input type=hidden name=\"action\" value=\"\">");
  printf("</form>");
  printf("<script>parent.parent.iframe_wpssubmit = true;</script>");
  printf("<script>setTimeout(function(){parent.document.wps_fm.submitted.value = '';}, 2000);</script>");
}

void sub_2975C(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r7@3
  int v5; // r5@6
  int v6; // r5@7
  int v7; // r8@9
  int v8; // r8@10
  const char *v9; // r0@12
  const char *v10; // r0@21
  int v12; // [sp+0h] [bp-5D8h]@1
  int v13; // [sp+418h] [bp-1C0h]@3
  int v14; // [sp+578h] [bp-60h]@1
  int v15; // [sp+598h] [bp-40h]@1
  int v16; // [sp+5B8h] [bp-20h]@3
  int v17; // [sp+5BCh] [bp-1Ch]@1

  v2 = get_value_post(a2, "firstload", &v14, 32) == 0;
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"wpsstatus_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"wpsstatus\">");
  printf("<input type=hidden name=\"firstload\" value=\"%d\">", v2);
  sf_strncpy(&v15);
  read_wireless_conf(&v12, &v15);
  v3 = wireless_get_wps_status(0, &v17);
  if ( v3 != 3 )
    v3 = wireless_get_wps_status(&v15, &v17);
  printf("<input type=hidden name=\"run2g\" value=\"%d\">", v12);
  printf("<input type=hidden name=\"wpsmode2g\" value=\"%d\">", v13);
  sf_strncpy(&v15);
  read_wireless_conf(&v12, &v15);
  v4 = wireless_get_wps_status(0, &v16);
  if ( v4 != 3 )
    v4 = wireless_get_wps_status(&v15, &v16);
  printf("<input type=hidden name=\"run5g\" value=\"%d\">", v12);
  printf("<input type=hidden name=\"wpsmode5g\" value=\"%d\">", v13);
  if ( v3 == 3 )
  {
    v6 = istatus_get_intvalue_direct("wps_2g_ts");
    v5 = v6 - get_system_running_time() + 120;
  }
  else
  {
    v5 = 0;
  }
  printf("<input type=hidden name=\"remaintime2g\" value=\"%d\">", v5);
  if ( v4 == 3 )
  {
    v8 = istatus_get_intvalue_direct("wps_5g_ts");
    v7 = v8 - get_system_running_time() + 120;
  }
  else
  {
    v7 = 0;
  }
  printf("<input type=hidden name=\"remaintime5g\" value=\"%d\">", v7);
  switch ( v3 )
  {
    case 0:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_STOP\">";
      break;
    case 1:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_IDLE\">";
      break;
    case 2:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_START\">";
      break;
    case 3:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_PROCESSING\">";
      break;
    case 4:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_CONFIGURED\">";
      break;
    case 5:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_ERROR\">";
      break;
    case 6:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"WPS_TIMEOUT\">";
      break;
    default:
      v9 = "<input type=hidden name=\"statusval2g\" value=\"NONE\">";
      break;
  }
  printf(v9);
  switch ( v4 )
  {
    case 0:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_STOP\">";
      break;
    case 1:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_IDLE\">";
      break;
    case 2:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_START\">";
      break;
    case 3:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_PROCESSING\">";
      break;
    case 4:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_CONFIGURED\">";
      break;
    case 5:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_ERROR\">";
      break;
    case 6:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"WPS_TIMEOUT\">";
      break;
    default:
      v10 = "<input type=hidden name=\"statusval5g\" value=\"NONE\">";
      break;
  }
  printf(v10);
  printf("</form>");
  printf("<script>parent.parent.iframe_wpsstatus = true;</script>");
  printf("<script>parent.init_wpsstatus(%d,%s);</script>");
}

void sub_29A88()
{
  sub_15988("wirelessconf", "basicsetup");
  sub_26820();
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"wps_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"wpssetup\">");
  printf("<input type=hidden name=\"submitted\" value=\"\">");
  printf("<input type=hidden name=\"act2gbtn\" value=\"\">");
  printf("<input type=hidden name=\"act5gbtn\" value=\"\">");
  printf("<table class=\"v3_table wl_mbssid_table\" height=\"24\">");
  printf("<COL WIDTH=\"140\"><COL WIDTH=\"140\"><COL WIDTH=\"%%%%\">");
  printf("<tr height=\"24\">");
  printf("<td style=\"padding:0 0 0 5; font-size:12px; vertical-align:middle;\">");
  printf("<button type=\"button\" class=\"wl_mbssid_button\" style=\"width:130px; display:inline-block; *display:inline; zoom:1;\" \t\tid=\"wpsconn2g\" onclick=\"onclick_wps_button('2g');\"></button>");
  printf("</td>");
  printf("<td style=\"padding:0 0 0 5; font-size:12px; vertical-align:middle;\">");
  printf("<button type=\"button\" class=\"wl_mbssid_button\" style=\"width:130px; display:inline-block; *display:inline; zoom:1;\" \t\tid=\"wpsconn5g\" onclick=\"onclick_wps_button('5g');\"></button>");
  printf("</td>");
  printf("<td style=\"padding:0 0 0 5; font-size:12px; vertical-align:middle;\">");
  printf("<div id=\"WPSSTATUSLINE\">");
  printf("<p class=\"wl_mbssid_p\" id=\"wpsstatus\" \t\tstyle=\"opacity:0.5; vertical-align:middle; display:inline-block; *display:inline; zoom:1;\"></p>");
  printf("</div></td>");
  printf("</table>");
  printf("<iframe name=\"wpsstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=wpsstatus\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  printf("<iframe name=\"wpssubmit_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=wpssubmit\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  printf("</BODY>");
  printf("<script>parent.iframe_wpssetup = true;</script>");
  printf("<script>init_wpssetup();</script>");
}

void sub_29BDC(int a1, int a2)
{
  int v2; // r5@1
  const char *v3; // r0@1
  int result; // r0@2
  int v5; // r4@4
  int v6; // r0@4
  int v7; // r0@4
  int v8; // r0@4
  int v9; // r0@5
  int v10; // r0@6
  int v11; // r0@6
  int v12; // r0@6
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r0@6
  int v16; // r0@6
  int v17; // r0@6
  int v18; // r5@6
  int v19; // r0@6
  int v20; // r0@6
  int v21; // r0@6
  int v22; // r0@6
  int v23; // r0@6
  int v24; // r0@6
  int v25; // r0@6
  int v26; // r0@6
  int v27; // r0@6
  int v28; // r0@6
  int v29; // r0@6
  char v30; // [sp+4h] [bp-34h]@2
  int v31; // [sp+24h] [bp-14h]@4

  v2 = a2;
  v3 = (const char *)get_pvalue(a1, "wlmode");
  if ( !v3 )
  {
    result = get_value_post(v2, "wlmode", &v30, 32);
    if ( !result )
      return result;
    v3 = &v30;
  }
  v5 = atoi(v3);
  sub_26820();
  sub_15988("wirelessconf", "basicsetup");
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"basicsetup_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"basicsetup\">");
  printf("<input type=hidden name=\"ocolor\" value=\"\">");
  printf("<table class=\"v3_table wl_mbssid_table\" height=\"96\">");
  printf("<COL WIDTH=\"100\"><COL WIDTH=\"200\"><COL WIDTH=\"%%%%\">");
  printf("<tr height=\"24\" class=\"wl_mbssid_title\" id=\"basicsetuptitle\"><td class=\"wl_mbssid_td\" colspan=\"3\">");
  printf("<p id=\"basicsetup_title_p\"></p>");
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\" id=\"SSID_LINE\"><td class=\"wl_mbssid_td\">");
  v6 = sub_15A94(1289);
  printf("<p>%s</p></td>", v6);
  printf("<td class=\"wl_mbssid_td\">");
  puts("<input type=text name=\"ssid\" style=\"width:190px;\" maxlength=\"32\" size=\"32\" value=''>");
  printf("</td><td class=\"wl_mbssid_td\">");
  v7 = sub_15A94(1278);
  printf(
    "<input type=\"checkbox\" name=\"broadcast\" id=\"bcast\" value=\"1\" style=\"margin-left:5px;\"><label for=\"bcast\">%s</label>",
    v7);
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\" id=\"CHANNEL_LINE\"><td class=\"wl_mbssid_td\">");
  v8 = sub_15A94(1279);
  printf("<p>%s</p></td>", v8);
  printf("<td class=\"wl_mbssid_td\">");
  printf("<select name=channel style=\"width:190px;\">");
  printf("</select></td><td class=\"wl_mbssid_td\">");
  get_active_wl(v5, 0, &v31);
  if ( !v31 )
  {
    v9 = sub_15A94(799);
    printf(
      "<input type=button class=\"wl_mbssid_button\" style=\"margin-left:5px;\" name='%s' value='%s' \t\t\t\tonclick=\"on"
      "click_searchwlbtn();\">",
      "search_channel_bt",
      v9);
  }
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\" id=\"AUTH_LINE\"><td class=\"wl_mbssid_td\">");
  v10 = sub_15A94(1277);
  printf("<p>%s</p></td>", v10);
  printf("<td class=\"wl_mbssid_td\">");
  puts("<select id=\"personallist\" name=\"personallist\" style=\"width:190px;\" onchange=\"set_authline_by_select(document, this.value);\">");
  v11 = sub_15A94(820);
  printf("<option value=\"%s\">%s \n", "nouse", v11);
  v12 = sub_15A94(931);
  printf("<option value=\"%s\">%s (%s) \n", "wpa2psk_aes", "WPA2PSK + AES", v12);
  printf("<option value=\"%s\">%s", "wpapsk", "WPAPSK");
  printf("<option value=\"%s\">%s", "wpapsk_aes", "WPAPSK + AES");
  printf("<option value=\"%s\">%s \n", "wpa2psk_tkipaes", "WPA2PSK + TKIP/AES");
  printf("<option value=\"%s\">%s \n", "wpapsk", "WPAPSK/");
  printf("<option value=\"%s\">%s", "wpapsk_tkipaes", "WPAPSK + TKIP/AES");
  printf("<option value=\"%s\">%s", "wpapsk_tkip", "WPAPSK + TKIP");
  printf("<option value=\"%s\">%s", "PAPSK/", "WPA2PSK + TKIP");
  printf("<option value=\"%s\">%s", "wpapsk", "WPAPSK/");
  v13 = sub_15A94(800);
  printf((const char *)"<option value="%s">", "auto_wep", v13, " + WEP");
  v14 = sub_15A94(801);
  printf((const char *)"<option value="%s">", "open_wep", v14, " + WEP");
  v15 = sub_15A94(802);
  printf((const char *)"<option value="%s">", "key_wep", v15, " + WEP");
  puts("</select>");
  puts("<select id=\"enterpriselist\" name=\"enterpriselist\" style=\"width:190px; display:none\">");
  v16 = sub_15A94(931);
  printf("<option value=\"%s\">%s (%s)\n", "wpa2_aes", "WPA2 + AES", v16);
  printf("<option value=\"%s\">%s \n", "wpawpa2_", "WPA/WPA2 + TKIP/AES");
  printf("<option value=\"%s\">%s", "wpa_aes", "WPA + AES");
  puts("</select>");
  printf("</td><td class=\"wl_mbssid_td\">");
  v17 = sub_15A94(1291);
  printf(
    "<input type=checkbox name=\"useenterprise\" id=\"uenter\" value=\"1\" style=\"margin-left:5px;\" onclick=\"set_enter"
    "prisemode_by_checkbox(document, this.checked);\"><label for=\"uenter\">%s</label>",
    v17);
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\" id=\"PASSWORD_LINE\"><td class=\"wl_mbssid_td\">");
  v18 = sub_15A94(1288);
  v19 = sub_15A94(1283);
  printf(
    "<p name=\"RADIUSSET\" id=\"RADIUSSET\" style=\"display:none;\">%s</p><p name=\"NORMALSET\" id=\"NORMALSET\">%s</p></td>",
    v18,
    v19);
  printf("</td><td class=\"wl_mbssid_td\" colspan=\"2\">");
  printf("<div class=\"wl_mbssid_div\" name=\"RADIUSSET\" id=\"RADIUSSET\" style=\"display:none;\"><div class=\"wl_mbssid_div\">");
  printf("<input type=\"text\" name=\"radiusserver1\" maxlength=\"3\" size=\"3\" style=\"width:25pt; ime-mode:disabled;\" onfocus=\"this.select();\" onkeyup=\"IPKeyUp('radiusserver',1);\" onkeypress=\"return IPKeyDown('radiusserver',1);\">");
  printf(".<input type=\"text\" name=\"radiusserver2\" maxlength=\"3\" size=\"3\" style=\"width:25pt; ime-mode:disabled;\" onfocus=\"this.select();\" onkeyup=\"IPKeyUp('radiusserver',2);\" onkeypress=\"return IPKeyDown('radiusserver',2);\">");
  printf(".<input type=\"text\" name=\"radiusserver3\" maxlength=\"3\" size=\"3\" style=\"width:25pt; ime-mode:disabled;\" onfocus=\"this.select();\" onkeyup=\"IPKeyUp('radiusserver',3);\" onkeypress=\"return IPKeyDown('radiusserver',3);\">");
  printf(".<input type=\"text\" name=\"radiusserver4\" maxlength=\"3\" size=\"3\" style=\"width:25pt; ime-mode:disabled;\" onfocus=\"this.select();\" onkeyup=\"IPKeyUp('radiusserver',4);\" onkeypress=\"return IPKeyDown('radiusserver',4);\">");
  printf(":<input type=\"text\" name=\"radiusport\" maxlength=5 size=5 style=\"max-width:40pt; ime-mode:disabled;\" value=\"\">");
  printf("</div>");
  printf("<input type=checkbox name=\"manual\" id=\"manport\" value=\"1\" style=\"margin-left:5px; vertical-align:middle;\" onclick=\"set_disenable_by_checkbox(this, document.basicsetup_fm.radiusport);\">");
  v20 = sub_15A94(1286);
  printf("<label for=\"manport\"> %s</label>", v20);
  v21 = sub_15A94(1283);
  printf(""<p style="padding:0; margin:0 5px 0 0px; display:inline-block; *dispay:inline; zoom:1; width:40px; text-align:right;">", v21);
  printf("<input type=\"password\" name=\"radiussecret\" value=\"\" style=\"ime-mode:disabled; width:120px;\" size=\"32\" maxlength=\"64\">");
  printf("<input type=\"text\" name=\"radiussecret_text\" value=\"\" style=\"ime-mode:disabled; width:120px; display:none;\" size=\"32\" maxlength=\"64\">");
  v22 = sub_15A94(1284);
  printf(
    "<input type=checkbox name=\"radiuspassview\" id=\"rpassview\" value=\"1\" style=\"vertical-align:middle; margin-left"
    ":5px;\" \t\tonclick=\"set_passview_by_checkbox(this, document.basicsetup_fm.radiussecret);\">\t\t<label for=\"rpassv"
    "iew\"> %s</label>",
    v22);
  printf("</div>");
  printf("<div class=\"wl_mbssid_div\" name=\"NORMALSET\" id=\"NORMALSET\"><input type=\"password\" name=\"password\" value=\"\" style=\"ime-mode:disabled; width:190px;\" size=\"32\" maxlength=\"64\"><input type=\"text\" name=\"password_text\" value=\"\" style=\"ime-mode:disabled; width:190px; display:none;\" size=\"32\" maxlength=\"64\">");
  v23 = sub_15A94(1284);
  printf(
    "<input type=checkbox name=\"wpapskpassview\" id=\"wpassview\" value=\"1\" style=\"vertical-align:middle; margin-left"
    ":15px;\" \t\tonclick=\"set_passview_by_checkbox(this, document.basicsetup_fm.password);\">\t\t<label for=\"wpassview"
    "\">%s</label></div>",
    v23);
  v24 = sub_15A94(1292);
  printf("<p style=\"display:none;\" name=\"WEPALERT\" id=\"WEPALERT\">%s</p>", v24);
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\">");
  printf("<td class=\"wl_mbssid_td\" style=\"padding:0; margin:0;\" colspan=\"3\">");
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"display:none; background-color:#FFFFFF;\" name=\"BASICSETUP_LINE\" id=\"POLICY_LINE\"><td class=\"wl_mbssid_td\">");
  v25 = sub_15A94(1285);
  printf("<p>%s>/p>", v25);
  puts("<select name=mbsspolicy style=\"width:190px;\">");
  v26 = sub_15A94(1276);
  printf("<option value=\"%d\">%s</option>", 1, v26);
  v27 = sub_15A94(1275);
  printf("<option value=\"%d\">%s</option>", 0, v27);
  printf("</select>");
  printf("</td><td class=\"wl_mbssid_td\">");
  v28 = sub_15A94(1287);
  printf(
    "<input type=\"checkbox\" name=\"qosenable\" id=\"qenable\" value=\"1\" style=\"margin-left:5px;\" \t\tonclick=\"set_"
    "disenable_by_checkbox(this, document.basicsetup_fm.txrate); set_disenable_by_checkbox(this, document.basicsetup_fm.r"
    "xrate);\">\t\t<label for=\"qenable\">%s</label>",
    v28);
  v29 = sub_15A94(1281);
  printf(
    "<p style=\"padding:0; margin:0 5px 0 0px; display:inline-block; *display:inline; zoom:1; width:65px; text-align:right;\">%s</p>",
    v29);
  printf("<input type=\"text\" name=\"rxrate\" value=\"\" style=\"ime-mode:disabled; width:50px;\" size=\"4\" maxlength=\"4\"> / ");
  printf("<input type=\"text\" name=\"txrate\" value=\"\" style=\"ime-mode:disabled; width:50px;\" size=\"4\" maxlength=\"4\"> Mbps");
  printf("</td></tr>");
  printf("</tr>");
  printf("</table>");
  printf("</BODY>");
  printf("<script>parent.iframe_basicsetup = true;</script>");
  printf("<script>init_basicsetup('%s');</script>");
}

void sub_2A278(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r5@1
  int v4; // r0@3
  int v5; // r1@3
  int *v6; // r4@3
  int v7; // r0@3
  int v8; // r0@3
  int v9; // r0@3
  int v10; // t1@5
  char *v11; // r1@7
  signed int v12; // r4@10
  int v13; // r0@12
  char *v14; // r1@13
  int v15; // r0@17
  char *v16; // r2@18
  int v17; // r0@20
  int v18; // r0@20
  int v19; // r0@20
  int v20; // r0@20
  int v21; // r0@22
  int v22; // r0@22
  int v23; // r0@22
  int v24; // r0@22
  int v25; // r0@22
  int v26; // r0@22
  int v27; // r0@22
  int v28; // r0@24
  int v29; // r0@24
  int v30; // r0@24
  int v31; // r0@24
  int v32; // r0@24
  int v33; // r0@24
  signed int v34; // r3@28
  signed int v35; // r2@28
  int v36; // r0@29
  const char *v37; // r0@31
  int v38; // r0@35
  int v39; // r0@35
  signed int v40; // r1@36
  int v41; // r0@38
  int v42; // r0@38
  int v43; // r1@39
  int v44; // r5@40
  int v45; // r1@44
  int v46; // r5@45
  char v48; // [sp+Ch] [bp-43Ch]@1
  int v49; // [sp+120h] [bp-328h]@27
  int v50; // [sp+16Ch] [bp-2DCh]@26
  char v51; // [sp+390h] [bp-B8h]@4
  char v52; // [sp+410h] [bp-38h]@1

  v2 = a2;
  get_si("hw", &v48);
  sub_26658();
  sub_26820();
  v3 = get_value_post(v2, "opened", &v52, 32);
  if ( v3 )
    v3 = atoi(&v52);
  sub_15988("wirelessconf", "basicsetup");
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden; background-color:#EEEEEE;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"extendsetup_fm\" style=\"padding:0; margin:0;\">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"extendsetup\">");
  printf("<input type=hidden name=\"opened\" value=\"%d\">", v3);
  printf("<table class=\"v3_table\">");
  printf("<COL WIDTH=\"110\"><COL WIDTH=\"190\"><COL WIDTH=\"110\"><COL WIDTH=\"%%%%\">");
  v4 = printf("<tr height=\"24\" class=\"wl_mbssid_title\" onclick=\"toggle_title(document.getElementsByName('tableunit'), document.getElementById('timg'));\" id=\"extendsetuptitle\">\t\t<td class=\"wl_mbssid_td\" colspan=\"4\">");
  v5 = sub_14BF4(v4);
  v6 = (int *)&country_names;
  printf(
    "<p id=\"EXTTITLE\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0"
    ";\"></p>\t\t<img id=\"timg\" src=\"/%s/menu_list_%s.png\" style=\"display:inline-block; *display:inline; zoom:1; hei"
    "ght:14px; vertical-align:middle; margin-left:5px; width:16px;\">",
    v5);
  printf("</td></tr>");
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF; %s;\" name=\"tableunit\"><td class=\"wl_mbssid_td\">");
  v7 = sub_15A94(1268);
  printf("<p>%s</p></td>", v7);
  printf("<td class=\"wl_mbssid_td\">");
  puts("<select name=\"wirelessmode\" style=\"width:90px;\">");
  printf("</select>");
  puts("<select name=\"channelwidth\" style=\"margin-left:5px; width:80px;\">");
  printf("</select>");
  printf("</td>");
  v8 = sub_15A94(1265);
  printf("<td class="wl_mbssid_td">", v8);
  printf("<td class=\"wl_mbssid_td\">");
  v9 = puts("<select name=\"country\" style=\"width:110px;\">");
  make_country_names(v9);
  while ( 1 )
  {
    v10 = *v6;
    v6 += 4;
    if ( !v10 )
      break;
    sf_strncpy(&v51);
    printf("<option value=%s> %s </option>", *(v6 - 3), &v51);
  }
  printf("</select>");
  printf("</td></tr>");
  if ( v3 )
    v11 = "";
  else
    v11 = "display:none;";
  if ( v3 )
    v12 = 49;
  else
    v12 = 25;
  printf("<tr height=\"24\" style=\"background-color:#F7F7F7; %s\" name=\"tableunit\"><td class=\"wl_mbssid_td\">", v11);
  v13 = sub_15A94(1272);
  printf("<p>%s</p></td>", v13);
  printf("<td class=\"wl_mbssid_td\">");
  printf("<input type=\"text\" name=\"txpower\" maxlength=\"3\" size=\"3\" value=\"\" style=\"width:80px;\"> %% ( 1 ~ 100 )");
  printf("</td><td class=\"wl_mbssid_td\"><p>Beacon</p></td>");
  printf("<td class=\"wl_mbssid_td\">");
  printf("<input type=\"text\" name=\"beacon\" maxlength=\"4\" size=\"4\" value=\"\" style=\"width:80px;\"> ms");
  printf("</td></tr>");
  if ( v3 )
    v14 = "";
  else
    v14 = "display:none;";
  if ( v3 )
    v12 += 24;
  printf("<tr height=\"24\" style=\"background-color:#FFFFFF; %s\" name=\"tableunit\"><td class=\"wl_mbssid_td\">", v14);
  v15 = sub_15A94(1270);
  printf("<p>%s</p></td>", v15);
  printf("<td class=\"wl_mbssid_td\">");
  printf("<input type=\"text\" name=\"rts\" maxlength=\"4\" size=\"4\" value=\"\" style=\"width:80px;\"> byte ( 0 ~ 2347 )");
  printf("</td><td class=\"wl_mbssid_td\"><p>Fragmentation</p></td>");
  printf("<td class=\"wl_mbssid_td\">");
  printf("<input type=\"text\" name=\"fragmentation\" maxlength=\"4\" size=\"4\" value=\"\" style=\"width:80px;\"> byte ( 256 ~ 2346 )");
  printf("</td></tr>");
  if ( v3 )
  {
    v16 = "";
    v12 += 24;
  }
  else
  {
    v16 = "display:none;";
  }
  printf("<tr height=\"24\" style=\"background-color:#%s; %s\" name=\"tableunit\">", "F7F7F7", v16);
  printf("<td class=\"wl_mbssid_td\"><p>WMM</p></td>");
  v17 = printf("<td class=\"wl_mbssid_td\">");
  v18 = sub_14BF4(v17);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"wmm_id\" style=\"vertical-align:middle; height:22px; display:inline-block; *dis"
    "play:inline; zoom:1;\" onclick=\"change_onoff_val(document, this);\">",
    v18);
  printf("<input type=\"hidden\" name=\"wmm\">");
  printf("</td>");
  printf("<td class=\"wl_mbssid_td\">");
  printf("<p>LDPC</p>");
  v19 = printf("</td><td class=\"wl_mbssid_td\">");
  v20 = sub_14BF4(v19);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"ldpc_id\" style=\"vertical-align:middle; height:22px; display:inline-block; *di"
    "splay:inline; zoom:1;\" onclick=\"change_onoff_val(document, this);\">",
    v20);
  printf("<input type=\"hidden\" name=\"ldpc\">");
  printf("</td>");
  printf("</tr>", "FFFFFF");
  if ( v3 )
    v12 += 24;
  v21 = sub_15A94(1273);
  printf("<td class="wl_mbssid_td">", v21);
  v22 = printf("</td><td class=\"wl_mbssid_td\">");
  v23 = sub_14BF4(v22);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"phywatchdog_id\" style=\"vertical-align:middle; height:22px; display:inline-blo"
    "ck; *display:inline; zoom:1;\" onclick=\"change_onoff_val(document, this);\">",
    v23);
  printf("<input type=\"hidden\" name=\"phywatchdog\">");
  printf("</td>");
  v24 = sub_15A94(1266);
  printf("<td class="wl_mbssid_td">", v24);
  v25 = printf("</td><td class=\"wl_mbssid_td\">");
  v26 = sub_14BF4(v25);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"dynchannel_id\" style=\"vertical-align:middle; height:22px; display:inline-bloc"
    "k; *display:inline; zoom:1;\" onclick=\"change_onoff_val(document, this); set_dynchannel_view_by_slider();\">",
    v26);
  printf("<input type=\"hidden\" name=\"dynchannel\">");
  v27 = sub_15A94(402);
  printf(
    "<input type=\"text\" name=\"dcsperiodhour\" maxlength=\"3\" size=\"3\" value=\"\" style=\"width:40px; display:inline"
    "-block; *display:inline; zoom:1; vertical-align:middle;\">%s</td>",
    v27);
  printf("</tr>", "F7F7F7");
  if ( v3 )
    v12 += 24;
  v28 = sub_15A94(1274);
  printf("<td class="wl_mbssid_td">", v28);
  v29 = printf("<td class=\"wl_mbssid_td\">");
  v30 = sub_14BF4(v29);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"wpsmode_id\" style=\"vertical-align:middle; height:22px; display:inline-block; "
    "*display:inline; zoom:1;\" onclick=\"change_onoff_val(document, this);\">",
    v30);
  printf("<input type=\"hidden\" name=\"wpsmode\">");
  printf("</td>");
  v31 = sub_15A94(1267);
  printf("<td class="wl_mbssid_td">", v31);
  v32 = printf("</td><td class=\"wl_mbssid_td\">");
  v33 = sub_14BF4(v32);
  printf(
    "<img src=\"/%s/trigger_on.png\" id=\"wpsnoti_id\" style=\"vertical-align:middle; height:22px; display:inline-block; "
    "*display:inline; zoom:1;\" onclick=\"change_onoff_val(document, this);\">",
    v33);
  printf("<input type=\"hidden\" name=\"wpsnoti\">");
  printf("</td>");
  printf("</tr>", "FFFFFF");
  if ( v3 )
    v12 += 24;
  if ( v50 > 2 || v49 > 2 )
  {
    v36 = sub_15A94(1301);
    printf("<td class=\"wl_mbssid_td\"><p class=\"wl_mbssid_p\" id=\"MIMOANT_TITLE\">%s</p>", v36);
    printf("</td><td class=\"wl_mbssid_td\">");
    printf("<select name=\"mimoant\">");
    printf("</select>");
    printf("</td>");
    v34 = 1;
    v35 = 7;
  }
  else
  {
    v34 = 0;
    v35 = 6;
  }
  if ( v35 & v34 )
    v37 = "<td class=\"wl_mbssid_td\"></td><td class=\"wl_mbssid_td\"></td></tr>";
  else
    v37 = "<td class="wl_mbssid_td"></td><td class="wl_mbssid_td"></td>";
  printf(v37);
  if ( v3 )
    v12 += 24;
  printf("</table>");
  printf("</BODY>");
  printf("<script>");
  v38 = sub_15A94(1271);
  printf("parent.document.exttitle = '%s';", v38);
  printf("parent.document.options2g = [];");
  printf("parent.document.options2g[%d] = {'value':'%d', 'text':'%s'};", 0, 6, "B,G,N");
  printf("parent.document.options2g[%d] = {'value':'%d', 'text':'%s'};");
  v39 = printf("parent.document.options2g[%d] = {'value':'%d', 'text':'%s'};", 2, 3, "G only");
  if ( wireless_api_support_onlyb(v39) )
  {
    printf("parent.document.options2g[%d] = {'value':'%d', 'text':'%s'};", 3, 2, "B only");
    v40 = 4;
  }
  else
  {
    v40 = 3;
  }
  printf("parent.document.options2g.length = %d;", v40);
  printf("parent.document.options5g = [];");
  printf("parent.document.options5g[%d] = {'value':'%d', 'text':'%s'};", 0, 10, "11ac/11n");
  printf("parent.document.options5g.length = %d;", 1);
  printf("parent.document.chanwidth2g = [];");
  printf("parent.document.chanwidth5g = [];");
  printf("parent.document.chanwidth5g[%d] = {'value':'%d', 'text':'%s'};", 0, 80, "80 MHz");
  printf("parent.document.chanwidth5g[%d] = {'value':'%d', 'text':'%s'};", 1, 40, "40 MHz");
  printf("parent.document.chanwidth5g[%d] = {'value':'%d', 'text':'%s'};", 2, 20, "20 MHz");
  v41 = sub_15A94(63);
  printf("parent.document.chanwidth5g[%d] = {'value':'%d', 'text':'%s'};", 3, 0, v41);
  printf("parent.document.chanwidth5g.length = %d;", 4);
  printf("parent.document.chanwidth2g[%d] = {'value':'%d', 'text':'%s'};", 0, 40, "40 MHz");
  printf("parent.document.chanwidth2g[%d] = {'value':'%d', 'text':'%s'};", 1, 20, "20 MHz");
  v42 = sub_15A94(63);
  printf("parent.document.chanwidth2g[%d] = {'value':'%d', 'text':'%s'};", 2, 0, v42);
  printf("parent.document.chanwidth2g.length = %d;", 3);
  if ( v50 > 2 )
  {
    printf("parent.document.mimoant5g = [];");
    v43 = 0;
    while ( v50 > 1 )
    {
      v44 = v43 + 1;
      printf("parent.document.mimoant5g[%d] = {'value':'%d', 'text':'%d X %d'};");
      v43 = v44;
      --v50;
    }
    printf("parent.document.mimoant5g.length = %d;", v43);
  }
  if ( v49 > 2 )
  {
    printf("parent.document.mimoant2g = [];");
    v45 = 0;
    while ( v49 > 1 )
    {
      v46 = v45 + 1;
      printf("parent.document.mimoant2g[%d] = {'value':'%d', 'text':'%d X %d'};");
      v45 = v46;
      --v49;
    }
    printf("parent.document.mimoant2g.length = %d;", v45);
  }
  printf("parent.iframe_extendsetup= true;");
  printf("init_extendsetup(%d);", v12);
  printf("</script>");
}

void sub_2AB00(int a1, int a2)
{
  signed int v2; // r4@1
  int v3; // r1@1
  signed int result; // r0@1
  bool v5; // zf@3
  int v6; // r0@7
  int v7; // r0@7
  int v8; // r0@9
  signed int v9; // r1@10
  int v10; // r0@12
  int v11; // r0@13
  int v12; // r0@15
  int v13; // r0@16
  int v14; // r0@18
  int v15; // r0@19
  int v16; // r0@21
  int v17; // r0@22
  int v18; // r0@24
  int v19; // r0@25
  int v20; // r0@27
  int v21; // r0@28
  int v22; // r0@30
  int v23; // r4@30
  int v24; // r0@30
  int v25; // r0@30
  int v26; // r0@30
  int v27; // r0@30
  int v28; // r0@30
  int v29; // r0@30
  int v30; // [sp+0h] [bp-88h]@12

  v2 = sub_265C8(0, a2);
  result = sub_265C8(1u, v3);
  if ( v2 != 1 && result != 1 )
  {
    v5 = v2 == 2;
    if ( v2 != 2 )
      v5 = result == 2;
    if ( v5 )
    {
      print_start_main_table();
      v6 = sub_15A94(826);
      v7 = sub_149D0(v6, 400, 100);
      result = print_end_main_table(v7);
    }
    else
    {
      puts("<style type=\"text/css\">");
      puts(".wl_main_table {");
      puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
      puts("\ttable-layout:fixed;");
      puts("}");
      puts(".wl_main_tr {");
      puts("\tborder:0 0 0 0; padding:0 0 0 0;");
      puts("}");
      puts(".wl_main_td {");
      puts("\tpadding:0 0 0 0; font-size:12px;");
      puts("\tvertical-align:middle;");
      puts("}");
      puts(".wl_main_button {");
      puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
      puts("\tvertical-align:middle;");
      puts("}");
      printf("</style>");
      sub_15988("wirelessconf", "basicsetup");
      printf("<body style=\"padding:0; margin:0;\">");
      printf("<table class=\"v3_table wl_main_table\">");
      printf("<form method=\"get\" action=\"timepro.cgi\" name=\"wireless_main_fm\" style=\"padding:0; margin:0;\">");
      printf("<input type=\"hidden\" name=\"tmenu\" value=\"wirelessconf\">");
      printf("<input type=\"hidden\" name=\"smenu\" value=\"basicsetup\">");
      if ( getenv("REMOTE_ADDR") && (v8 = get_wireless_mode_by_ipaddr()) != 0 )
        v9 = v8 != 2;
      else
        v9 = -1;
      printf("<input type=\"hidden\" name=\"connmode\" value=\"%d\">", v9);
      printf("<tr height=\"509\" class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      printf("<div style=\"padding:0; margin:0; width:100%%; height:509px; overflow:auto;\">");
      printf("<table class=\"v3_table wl_main_table\">");
      printf("<tr class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      v10 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=");
      if ( is_mobile_agent(v10) )
      {
        sub_1590C("100%", "100%", "display:inline-block; *display:inline; zoom:1;");
        v11 = printf(
                "<iframe name=\"multibssid_iframe\" src=\"%s\" frameborder=no width=100%% height=100%% align=center scrol"
                "ling=no></iframe>",
                &v30);
        sub_15958(v11);
      }
      else
      {
        printf(
          "<iframe name=\"multibssid_iframe\" src=\"%s\" frameborder=no width=100%% height=100%% align=center scrolling=no></iframe>",
          &v30);
      }
      printf("</td></tr>");
      printf("<tr class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      v12 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=basicsetup&wlmode=%d", 1);
      if ( is_mobile_agent(v12) )
      {
        sub_1590C("144", "100%", "display:inline-block; *display:inline; zoom:1;");
        v13 = printf(
                "<iframe name=\"basicsetup_iframe\" src=\"%s\" frameborder=no width=100%% height=144 align=center scrolling=no></iframe>",
                &v30);
        sub_15958(v13);
      }
      else
      {
        printf(
          "<iframe name=\"basicsetup_iframe\" src=\"%s\" frameborder=no width=100%% height=144 align=center scrolling=no></iframe>",
          &v30);
      }
      printf("</td></tr>");
      printf("<tr class=\"wl_main_tr\" id=\"extline\"><td class=\"wl_main_td\">");
      v14 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=");
      if ( is_mobile_agent(v14) )
      {
        sub_1590C("100%", "100%", "display:inline-block; *display:inline; zoom:1;");
        v15 = printf(
                "<iframe name=\"extendsetup_iframe\" src=\"%s\" frameborder=no width=100%% height=100%% align=center scro"
                "lling=no></iframe>",
                &v30);
        sub_15958(v15);
      }
      else
      {
        printf(
          "<iframe name=\"extendsetup_iframe\" src=\"%s\" frameborder=no width=100%% height=100%% align=center scrolling=no></iframe>",
          &v30);
      }
      printf("</td></tr>");
      printf("<tr class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      v16 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=hiddenwlsetup&wlmode=%d", 1);
      if ( is_mobile_agent(v16) )
      {
        sub_1590C("0", "0", "display:inline-block; *display:inline; zoom:1;");
        v17 = printf(
                "<iframe name=\"hiddenwlsetup_iframe\" src=\"%s\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>",
                &v30);
        sub_15958(v17);
      }
      else
      {
        printf(
          "<iframe name=\"hiddenwlsetup_iframe\" src=\"%s\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>",
          &v30);
      }
      v18 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=");
      if ( is_mobile_agent(v18) )
      {
        sub_1590C("0", "0", "display:inline-block; *display:inline; zoom:1;");
        v19 = printf(
                "<iframe name=\"wlsearch_iframe\" src=\"%s\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>",
                &v30);
        sub_15958(v19);
      }
      else
      {
        printf(
          "<iframe name=\"wlsearch_iframe\" src=\"%s\" frameborder=no width=0 height=0 align=center scrolling=no></iframe>",
          &v30);
      }
      printf("</td></tr>");
      printf("</table></div></td></tr>");
      printf("<tr height=\"26\" class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      printf("<table class=\"v3_table wl_mbssid_table\" height=\"26\">");
      printf("<COL WIDTH=\"580\"><COL WIDTH=\"%%%%\">");
      printf("<tr class=\"wl_main_tr\"><td class=\"wl_main_td\">");
      v20 = snprintf((char *)&v30, 0x80u, "timepro.cgi?tmenu=iframe&smenu=");
      if ( is_mobile_agent(v20) )
      {
        sub_1590C("24", "100%", "display:inline-block; *display:inline; zoom:1;");
        v21 = printf(
                "<iframe name=\"wpssetup_iframe\" src=\"%s\" frameborder=no width=100%% height=24 align=center scrolling=no></iframe>",
                &v30);
        sub_15958(v21);
      }
      else
      {
        printf(
          "<iframe name=\"wpssetup_iframe\" src=\"%s\" frameborder=no width=100%% height=24 align=center scrolling=no></iframe>",
          &v30);
      }
      printf("</td><td class=\"wl_main_td\">");
      printf("<button type=\"button\" class=\"wl_main_button\" name=\"apply_btn\" \t\tstyle=\"width:45px; float:right; margin-right:5px;\" onclick=\"onclick_allsubmit();\">");
      v22 = sub_15A94(32);
      printf("%s", v22);
      printf("</button>");
      printf("</td></tr></table>");
      printf("</td></tr>");
      printf("</form></table>");
      v23 = sub_15A94(1295);
      printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
      puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
      printf("</DIV>");
      puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid; \t\tbox-shadow:5px 5px 20px #888888;\">");
      puts("<table width=\"180\" height=\"70\">");
      printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
      v24 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
      v25 = sub_14BF4(v24);
      printf(
        "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
        v25);
      printf("</SPAN></td>");
      printf(
        "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\t\t<SPAN style=\"vertical-align:middle; "
        "display:block; text-align:center;\">%s\n",
        v23);
      printf("</SPAN></td>");
      printf("</tr><table></DIV>");
      printf("<DIV id=\"%s\" style=\"display:none;\">", "search_mask");
      printf(
        "<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffff"
        "ff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity"
        "=50);\"                 onclick=\"UnMaskIt(document,'%s');\">\n",
        "search_mask");
      printf("</DIV>");
      v26 = puts("<DIV style=\"position:absolute; left:111px; top:128px; width:420px; height:210px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888; overflow:hidden; display:none;\" id=\"loadingwllist\">");
      v27 = sub_14BF4(v26);
      printf(
        "<p align=\"center\"><img src=\"/%s/apply_ani.gif\" style=\"width:40px; height:40px; margin-top:20px;\"></p>",
        v27);
      v28 = sub_15A94(1296);
      printf("<p align=\"center\" style=\"font-size:16px;\">%s</p>", v28);
      v29 = sub_15A94(1297);
      printf("<p align=\"center\" style=\"font-size:16px;\">%s</p>", v29);
      printf("</DIV>");
      puts("<DIV style=\"position:absolute; left:111px; top:128px; width:420px; height:210px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888; overflow:hidden;\" id=\"searchwllist\">");
      printf("</DIV>");
      printf("</body>");
      printf("<script>");
      sub_269F4(0);
      sub_269F4(1);
      printf("init_mainsetup_form();");
      printf("</script>");
    }
}

void sub_2B13C()
{
  printf("<TR height=20 STYLE=\"background-Color:#%s\">");
  printf("<TD colspan=4></TD></TR>");
}

int sub_2B184(int a1)
{
  int v1; // r5@1
  int v2; // r10@1
  int result; // r0@1
  int v4; // r4@2
  int v5; // r11@2
  int v6; // r7@2
  int v7; // r8@6
  int v8; // r10@7
  int v9; // r7@15
  void *v10; // r0@18
  const char *v11; // r0@22
  int v12; // r5@26
  int v13; // r7@27
  void *v14; // r0@28
  __int16 v15; // r1@33
  int v16; // r5@33
  char *v17; // r0@33
  size_t v18; // r3@33
  int v19; // r0@36
  char s; // [sp+Ch] [bp-374h]@15
  char v21; // [sp+20Ch] [bp-174h]@1
  char v22; // [sp+30Ch] [bp-74h]@13
  char v23; // [sp+32Ch] [bp-54h]@1
  char v24; // [sp+34Ch] [bp-34h]@6
  __int16 v25; // [sp+350h] [bp-30h]@33
  int v26; // [sp+354h] [bp-2Ch]@1

  v1 = a1;
  v26 = 0;
  v2 = hwinfo_get_max_macauth();
  get_intvalue_post(v1, 'b', &v26);
  strcpy(&v21, "");
  result = get_value_post(v1, "act", &v23, 32);
  if ( result )
  {
    v4 = macdb_read();
    v5 = macauth_get_policy();
    v6 = strcmp(&v23, "unregister");
    if ( v6 )
    {
      if ( strcmp(&v23, "manual_register") )
      {
LABEL_36:
        v19 = macdb_free(v4);
        signal_save(v19);
        return 1;
      }
      if ( !get_value_post(v1, "manual_mac", &v22, 32) )
      {
        macdb_free(v4);
        return 0;
      }
      strcpy(&s, "");
      get_value_post(v1, "info", &s, 512);
      if ( check_unpermitted_chars(&s) )
        strcpy(&s, "");
      if ( macdb_search(v4, &v22) )
      {
        v10 = *(void **)(v9 + 12);
        if ( v10 )
          free(v10);
        *(_DWORD *)(v9 + 12) = strdup(&s);
        ((void (*)(void))macdb_write)();
      }
      else if ( *(_DWORD *)v4 < v2 )
      {
        v11 = (const char *)sub_15A94(251);
        if ( !strcmp(&s, v11) )
          strcpy(&s, "");
        convert_mac2(&v22);
        if ( v5 == 1 )
          ((void (*)(void))wireless_macauth_kickmac)();
        v12 = 0;
        strtomac(&v22, &v24);
        while ( 1 )
        {
          if ( v12 >= *(_DWORD *)v4 )
          {
            v15 = v25;
            v16 = v4 + 16 * *(_DWORD *)v4;
            *(_DWORD *)(v16 + 8) = *(_DWORD *)&v24;
            *(_WORD *)(v16 + 12) = v15;
            v17 = strdup(&s);
            v18 = *(_DWORD *)v4;
            *(_DWORD *)(v16 + 16) = v17;
            *(_DWORD *)v4 = v18 + 1;
            *(_DWORD *)(v4 + 16 * v18 + 4) = 0;
            goto LABEL_34;
          }
          v13 = v4 + 16 * v12;
          if ( !memcmp(&v24, (const void *)(v13 + 8), 6u) )
            break;
          ++v12;
        }
        v14 = *(void **)(v13 + 16);
        if ( v14 )
          free(v14);
        *(_DWORD *)(v4 + 16 * v12 + 16) = strdup(&s);
LABEL_34:
        qsort((void *)(v4 + 4), *(_DWORD *)v4, 0x10u, (__compar_fn_t)sub_2B174);
        ((void (*)(void))macdb_write)();
        ((void (*)(void))wireless_apply_macauth)();
      }
    }
    else
    {
      while ( get_value_array_post(v1, "rmmacchk", v6, &v21) )
      {
        convert_mac2(&v21);
        if ( v5 == 2 )
          wireless_macauth_kickmac(v26);
        strtomac(&v21, &v24);
        v7 = 0;
        while ( v7 < *(_DWORD *)v4 )
        {
          v8 = v4 + 16 * v7++;
          if ( !memcmp(&v24, (const void *)(v8 + 8), 6u) )
            *(_DWORD *)(v8 + 4) = 1;
        }
        ++v6;
      }
      qsort((void *)(v4 + 4), *(_DWORD *)v4, 0x10u, (__compar_fn_t)sub_2B174);
      macdb_write(v26);
      wireless_apply_macauth(v26);
      signal_start('f');
    }
    printf("<script>parent.parent.macauth_bsslist.location.href = .timepro.cgi?tmenu=iframe&smenu=macauth_bsslist&act=refresh&bssidx=%d';");
    goto LABEL_36;
  }
  return result;
}

int sub_2B184(int a1)
{
  int v1; // r5@1
  int v2; // r10@1
  int result; // r0@1
  int v4; // r4@2
  int v5; // r11@2
  int v6; // r7@2
  int v7; // r8@6
  int v8; // r10@7
  int v9; // r7@15
  void *v10; // r0@18
  const char *v11; // r0@22
  int v12; // r5@26
  int v13; // r7@27
  void *v14; // r0@28
  __int16 v15; // r1@33
  int v16; // r5@33
  char *v17; // r0@33
  size_t v18; // r3@33
  int v19; // r0@36
  char s; // [sp+Ch] [bp-374h]@15
  char v21; // [sp+20Ch] [bp-174h]@1
  char v22; // [sp+30Ch] [bp-74h]@13
  char v23; // [sp+32Ch] [bp-54h]@1
  char v24; // [sp+34Ch] [bp-34h]@6
  __int16 v25; // [sp+350h] [bp-30h]@33
  int v26; // [sp+354h] [bp-2Ch]@1

  v1 = a1;
  v26 = 0;
  v2 = hwinfo_get_max_macauth();
  get_intvalue_post(v1, 'b', &v26);
  strcpy(&v21, "");
  result = get_value_post(v1, "act", &v23, 32);
  if ( result )
  {
    v4 = macdb_read();
    v5 = macauth_get_policy();
    v6 = strcmp(&v23, "unregister");
    if ( v6 )
    {
      if ( strcmp(&v23, "manual_register") )
      {
LABEL_36:
        v19 = macdb_free(v4);
        signal_save(v19);
        return 1;
      }
      if ( !get_value_post(v1, "manual_mac", &v22, 32) )
      {
        macdb_free(v4);
        return 0;
      }
      v9 = macdb_search(v4, &v22);
      strcpy(&s, "");
      get_value_post(v1, "info", &s, 512);
      if ( check_unpermitted_chars(&s) )
        strcpy(&s, "");
      if ( v9 )
      {
        v10 = *(void **)(v9 + 12);
        if ( v10 )
          free(v10);
        *(_DWORD *)(v9 + 12) = strdup(&s);
        ((void (*)(void))macdb_write)();
      }
      else if ( *(_DWORD *)v4 < v2 )
      {
        v11 = (const char *)sub_15A94(251);
        if ( !strcmp(&s, v11) )
          strcpy(&s, "");
        convert_mac2(&v22);
        if ( v5 == 1 )
          ((void (*)(void))wireless_macauth_kickmac)();
        v12 = 0;
        strtomac(&v22, &v24);
        while ( 1 )
        {
          if ( v12 >= *(_DWORD *)v4 )
          {
            v15 = v25;
            v16 = v4 + 16 * *(_DWORD *)v4;
            *(_DWORD *)(v16 + 8) = *(_DWORD *)&v24;
            *(_WORD *)(v16 + 12) = v15;
            v17 = strdup(&s);
            v18 = *(_DWORD *)v4;
            *(_DWORD *)(v16 + 16) = v17;
            *(_DWORD *)v4 = v18 + 1;
            *(_DWORD *)(v4 + 16 * v18 + 4) = 0;
            goto LABEL_34;
          }
          v13 = v4 + 16 * v12;
          if ( !memcmp(&v24, (const void *)(v13 + 8), 6u) )
            break;
          ++v12;
        }
        v14 = *(void **)(v13 + 16);
        if ( v14 )
          free(v14);
        *(_DWORD *)(v4 + 16 * v12 + 16) = strdup(&s);
LABEL_34:
        qsort((void *)(v4 + 4), *(_DWORD *)v4, 0x10u, (__compar_fn_t)sub_2B174);
        ((void (*)(void))macdb_write)();
        ((void (*)(void))wireless_apply_macauth)();
      }
    }
    else
    {
      while ( get_value_array_post(v1, "rmmacchk", v6, &v21) )
      {
        convert_mac2(&v21);
        if ( v5 == 2 )
          wireless_macauth_kickmac(v26);
        strtomac(&v21, &v24);
        v7 = 0;
        while ( v7 < *(_DWORD *)v4 )
        {
          v8 = v4 + 16 * v7++;
          if ( !memcmp(&v24, (const void *)(v8 + 8), 6u) )
            *(_DWORD *)(v8 + 4) = 1;
        }
        ++v6;
      }
      qsort((void *)(v4 + 4), *(_DWORD *)v4, 0x10u, (__compar_fn_t)sub_2B174);
      macdb_write(v26);
      wireless_apply_macauth(v26);
      signal_start('f');
    }
    printf("<script><parent.parent.macauth_bsslist.location.href = 'timepro.cgi?tmenu=iframe&bssidx=%d';");
    goto LABEL_36;
  }
  return result;
}

int sub_2B514(int a1)
{
  int v1; // r4@1
  int v2; // r4@2
  signed int v3; // r6@4
  signed int v4; // r8@4
  signed int v5; // r3@4
  int v6; // r4@7
  int v7; // r5@10
  int v8; // r0@10
  int v9; // r8@11
  int v10; // r0@11
  int v11; // r0@11
  int v12; // r0@11
  int v13; // r0@12
  int v14; // r0@14
  signed int v15; // r0@15
  int v16; // r0@17
  const char *v17; // r0@19
  int v18; // r0@20
  int v19; // r0@20
  int v20; // r0@20
  char *v21; // r0@22
  char *v22; // r8@22
  char *v23; // r1@23
  char *v24; // ST0C_4@25
  int v25; // r0@25
  char *v26; // r1@26
  char *v27; // ST0C_4@28
  int v28; // r0@28
  int v29; // r0@30
  int v30; // r0@30
  const char *v31; // r1@31
  const char *v32; // r1@36
  signed int v34; // [sp+14h] [bp-634h]@6
  int v35; // [sp+18h] [bp-630h]@10
  int v36; // [sp+24h] [bp-624h]@7
  int v37; // [sp+28h] [bp-620h]@11
  int v38; // [sp+59Ch] [bp-ACh]@22
  int v39; // [sp+5BCh] [bp-8Ch]@11
  int v40; // [sp+5DCh] [bp-6Ch]@11
  int v41; // [sp+5FCh] [bp-4Ch]@4
  int v42; // [sp+61Ch] [bp-2Ch]@1

  v1 = a1;
  v42 = 0;
  if ( get_intvalue(a1, 'b', &v42) )
    v2 = SHIWORD(v42);
  else
    v2 = sub_13EC4(v1);
  sub_15988("wirelessconf", "macauth");
  v3 = 0;
  printf("<BODY style=\"padding:0px 0px; margin:0px 0px;\">");
  printf("<form method=get action=timepro.cgi name=bsslist_fm style=\"margin: 0;\">");
  printf("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=macauth_bsslist>");
  v4 = 0;
  printf("<input type=hidden name=act >");
  printf("<table style='border-collapse: collapse; width: 100%%;'>");
  printf("<colgroup><COL WIDTH=5%%><COL WIDTH=47%%><COL WIDTH=48%%></colgroup>");
  sf_strncpy(&v41);
  wireless_api_get_run(&v41);
  v5 = v2;
  if ( v2 )
    v5 = 1;
  v34 = v5 << 16 * v2;
  while ( 1 )
  {
    v6 = v4 + v34;
    memset(&v36, 0, 0x578u);
    if ( !read_mbssid_conf(v4 + v34, &v36) )
      break;
    if ( v6 == v42 )
      v3 = v4;
    v35 = v4 + 1;
    v7 = macauth_get_policy(v6);
    v8 = printf(
           "<TR height=26 ID=bss_row_%d STYLE=\"cursor:pointer; background-Color:#%s\" ONCLICK=\"ClickMacAuthBss(%d, %d);\">",
           v4);
    if ( !v36 )
    {
      v18 = sub_14BF4(v8);
      printf(
        "<TD style=\"padding-left:5px; opacity: 0.3;\"><img name=wifi_icon src=\"/%s/wifi_v3_on.png\" style=\" width: 22p"
        "x; height: 22px; \"></TD>",
        v18);
      v19 = sub_149EC(&v37);
      printf("<TD>%s</TD>", v19);
      printf("<TD ID=bssidx_%d_value>", v6);
      v20 = sub_15A94(1261);
      printf("<span style=\"margin-left: 5px; \">%s", v20);
      goto LABEL_21;
    }
    v9 = macauth_get_count(v6);
    wireless_api_get_ifname(v6, &v39);
    get_hwaddr_kernel(&v39, &v40);
    v10 = convert_mac(&v40);
    v11 = sub_14BF4(v10);
    printf(
      "<TD style=\"padding-left:5px;\"><img name=wifi_icon src=\"/%s/wifi_v3_on.png\" style=\" width: 22px; height: 22px; \"></TD>",
      v11);
    v12 = sub_149EC(&v37);
    printf("<TD>%s(%s)", v12, &v40);
    printf("<TD ID=bssidx_%d_value>", v6);
    if ( !v7 )
    {
      v13 = sub_15A94(818);
      printf("<span style=\"margin-left: 5px; \" class='gray_text'>%s</span>", v13);
      goto LABEL_22;
    }
    if ( v7 == 1 )
    {
      v14 = sub_15A94(1235);
      printf("<span style=\"margin-left: 5px; \">%s", v14);
      if ( v9 )
      {
        putchar(40);
        v15 = 135;
LABEL_19:
        v17 = (const char *)sub_15A94(v15);
        printf(v17, v9);
        putchar(41);
        goto LABEL_21;
      }
    }
    else
    {
      if ( v7 != 2 )
        goto LABEL_22;
      v16 = sub_15A94(1235);
      printf("<span style=\"margin-left: 5px; \">%s", v16);
      if ( v9 )
      {
        putchar(40);
        v15 = 0;
        goto LABEL_19;
      }
    }
LABEL_21:
    printf("</span>");
LABEL_22:
    v21 = getenv("REMOTE_ADDR");
    v22 = "";
    get_internal_pc_hardware_address(v21, &v38);
    convert_mac(&v38);
    printf(
      "<select id=\"bssidx_%d_policy\" style=\"display: none; height: 20px;\" name=\"policy_mode\" onchange=\"SubmitMacAu"
      "thPolicy('%s', %d, %d)\">",
      v6,
      &v38,
      v6,
      v7);
    if ( v7 )
      v23 = "";
    else
    printf("<option value=\"open\"%s>%s</option>", "<TD>%s(%s)", sub_15A94(818));
    if ( v7 == 1 )
      v26 = ""<TD>%s(%s)"";
    else
      v26 = "";
    v27 = v26;
    printf("<option value=\"accept\"%s>%s</option>", v27, sub_15A94(548));
    if ( v7 == 2 )
      v22 = "<TD>%s(%s)";
    printf("<option value=\"reject\"%s>%s</option>", v22, sub_15A94(549));
    printf("</select>");
    printf("<input type=hidden name=\"m_ssid\" value='%s' disabled>\n", sub_149EC(&v37));
    if ( v7 )
    {
      v31 = "reject";
      if ( v7 == 1 )
        v31 = "accept";
    }
    else
    {
      v31 = "open";
    }
    printf("<input type=hidden name=\"m_policy\" value=\"%s\" disabled>\n", v31);
    printf("<input type=hidden name=\"m_bssidx\" value=\"%d\" disabled>\n", v6);
    printf("</TD>");
    printf("</TR>");
    v4 = v35;
  }
  while ( v4 <= 3 )
  {
    if ( v4 & 1 )
      v32 = "f7f7f7";
    else
    printf("<TR height=26 STYLE=\"background-Color:#%s\">", "ffffff");
    printf("<TD colspan=%d></TD></TR>", 3);
    ++v4;
  }
  printf("</TABLE>");
  printf("</form>");
  puts("<script>");
  printf("ClickMacAuthBss(%d, %d);", v3, v42);
  puts("</script>");
  puts("<iframe src=\"timepro.cgi?tmenu=iframe&smenu=macauth_bsslist_submit\" name=\"macauth_bsslist_submit\" style=\"display:none;\"></iframe>");
  puts("</BODY>");
}

void sub_2BA20(int a1, int a2, int a3)
{
  int v3; // r4@1
  const char *v4; // r0@1
  const char *v5; // r5@1
  signed int v6; // r4@2
  const char *v7; // r0@6
  const char *v8; // r4@6
  int v9; // r1@8
  int v10; // r0@9
  int v11; // r0@15
  int v13; // [sp+4h] [bp-14h]@1
  int v14; // [sp+8h] [bp-10h]@1

  v14 = a3;
  v3 = a1;
  v13 = 0;
  v4 = (const char *)get_pvalue(a1, "act");
  v5 = v4;
  if ( !v4 )
  {
    v6 = -1;
    goto LABEL_20;
  }
  if ( strcmp(v4, "apply") )
  {
    v11 = strcmp(v5, "refresh");
    if ( !v11 )
      v11 = get_intvalue(v3, 'b', &v13);
    goto LABEL_19;
  }
  if ( !get_intvalue(v3, 'm', &v13) )
  {
    v6 = -3;
    goto LABEL_20;
  }
  v7 = (const char *)get_pvalue(v3, "policy_mode");
  v8 = v7;
  if ( !v7 )
  {
    v6 = -2;
    goto LABEL_20;
  }
  v9 = strcmp(v7, "open");
  if ( v9 )
  {
    if ( !strcmp(v8, "reject") )
    {
      v10 = v13;
      v9 = 2;
    }
    else
    {
      if ( strcmp(v8, "accept") )
        goto LABEL_15;
      v10 = v13;
      v9 = 1;
    }
  }
  else
  {
    v10 = v13;
  }
  macauth_set_policy(v10, v9);
LABEL_15:
  v11 = strcmp(v8, "open");
  if ( v11 )
    v11 = bcm_wireless_macauth_kickall(v13);
LABEL_19:
  signal_save(v11);
  v6 = v13;
LABEL_20:
  printf("<BODY>");
  printf("<form method=get action=timepro.cgi name=bsslist_fm>");
  printf("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=macauth_bsslist_submit>");
  printf("<input type=hidden name=act >");
  printf("<input type=hidden name=policy_mode>");
  printf("<input type=hidden name=m_ssid>");
  printf("<input type=hidden name=m_policy>");
  printf("<input type=hidden name=m_bssidx>");
  printf("</form>");
  if ( v6 >= 0 )
    printf(
      "<script>parent.location.href = \"timepro.cgi?tmenu=iframe&smenu=macauth_bsslist&act=refresh&bssidx=%d\";</script>",
      v6);
  puts("</BODY>");
}

void sub_2BBE8(int a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-8h]@1

  v5 = a3;
  v4 = 0;
  if ( a2 )
    get_intvalue_post(a2, 'b', &v4);
  else
    get_intvalue(a1, 'b', &v4);
  sub_15988("wirelessconf", "macauth");
  printf("<script>");
  printf("</script>");
  puts("<BODY BOTTOMMARGIN=0 RIGHTMARGIN=0 LEFTMARGIN=0 TOPMARGIN=0 MARGINWIDTH=0 MARGINHEIGHT=0 >");
  printf("<form name=\"macauth_dblist_fm\" method=post style=\"margin: 0;\">");
  puts("</form>");
  printf(
    "<iframe src=\"timepro.cgi?tmenu=iframe&smenu=macauth_dblist_submit&bssidx=%d\" name=\"macauth_dblist_submit\" style="
    "\"display: none;\" ></iframe>\n",
    v4);
  puts("</BODY>");
}

int sub_2BC8C(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  signed int *v4; // r6@8
  int result; // r0@9
  int v6; // r0@10
  int v7; // r0@10
  const char *v8; // r0@11
  char *v9; // r0@13
  int v10; // r9@13
  signed int *v11; // r5@15
  signed int v12; // r4@15
  signed int v13; // t1@20
  signed int v14; // r2@20
  signed int v15; // r10@21
  char v16; // [sp+18h] [bp-80h]@16
  char s; // [sp+38h] [bp-60h]@16
  unsigned __int8 v18; // [sp+58h] [bp-40h]@13
  int v19; // [sp+6Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  v19 = 0;
  ((void (*)(void))hwinfo_get_max_macauth)();
  if ( v2 )
    get_intvalue_post(v2, 'b', &v19);
  else
    get_intvalue(v3, 'b', &v19);
  if ( v19 < 0 )
    v19 = 0;
  if ( v2 )
    sub_2B184(v2);
  v4 = (signed int *)macdb_read();
  if ( v4 )
  {
    sub_15988("wirelessconf", "macauth");
    puts("<BODY BOTTOMMARGIN=0 RIGHTMARGIN=0 LEFTMARGIN=0 TOPMARGIN=0 MARGINWIDTH=0 MARGINHEIGHT=0 >");
    printf("<form name=\"macauth_dblist_fm\" method=post style=\"margin: 0;\">");
    printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
    printf("<input type=hidden name=\"smenu\" value=\"macauth_dblist_submit\">");
    printf("<input type=hidden name=\"act\" value=\"\">");
    v6 = printf("<input type=hidden name=bssidx value=%d>");
    v7 = hwinfo_get_max_macauth(v6);
    printf("<input type=hidden name=\"maxmac_count\" value=\"%d\">", v7);
    printf("<input type=hidden name=\"rmac_count\" value=\"%d\">", *v4);
    printf("<input type=hidden name=\"manual_mac\">");
    printf("<input type=hidden name=\"info\">");
    printf("<table cellspacing=0px cellpadding=0px align=left border=0 width=100%% style='width: 100%%; border-collapse: collapse;'>\n");
    if ( *v4 <= 7 )
      v8 = "<colgroup><COL width=53%%><COL width=39%%><COL width=8%%></colgroup>";
    else
      v8 = "<colgroup><COL width=53%%><COL width=41.5%%><COL width=5.5%%></colgroup>";
    printf(v8);
    strcpy((char *)&v18, "");
    v9 = getenv("REMOTE_ADDR");
    get_internal_pc_hardware_address(v9, &v18);
    v10 = v18;
    if ( v18 )
      v10 = macdb_search(v4, &v18);
    v11 = v4;
    v12 = 0;
    while ( 1 )
    {
      v15 = *v4;
      if ( v12 >= *v4 )
        break;
      snprintf(
        &s,
        0x20u,
        "%02X:%02X:%02X:%02X:%02X:%02X",
        *((_BYTE *)v11 + 8),
        *((_BYTE *)v11 + 9),
        *((_BYTE *)v11 + 10),
        *((_BYTE *)v11 + 11),
        *((_BYTE *)v11 + 12),
        *((_BYTE *)v11 + 13));
      sf_strncpy(&v16);
      convert_mac(&v16);
      v11[4];
      printf(
        "<tr id=\"mac_row_%d\" style=\"cursor:pointer; background-color:#%s; height: 20px;\" onclick=\"ClickMacReg('%d', '%s', '%s');\">",
        v12);
      printf("<td align=left style=\"padding-left:5px;\">");
      if ( v10 == (_DWORD)&v4[4 * v12 + 1] )
        printf("<span style='font: normal normal bold 9pt arial; color:navy;'>");
      printf("%s", &v16);
      if ( v10 == (_DWORD)&v4[4 * v12 + 1] )
        printf("</span>");
      printf("</td>");
      printf("<td align=left style=\"padding-left:5px;\">");
      v13 = v11[4];
      v11 += 4;
      printf("<span title=\"%s\" style=\"color:#888888; overflow:hidden; display:inline-block; white-space:nowrap; text-overflow:ellipsis;\">%s</span>");
      printf("</td>");
      v14 = v12++;
      printf(
        "<td align=left style=\"padding-left:5px;\"><input type=checkbox name=\"rmmacchk\" value=\"%s\" onchange=\"macaut"
        "h_dblist_submit.document.getElementsByName('rmmacchk')[%d].checked = this.checked;\"></td>",
        &s,
        v14);
      puts("</tr>");
    }
    while ( v15 <= 6 )
    {
      ++v15;
      ++v12;
      sub_2B13C();
    }
    puts("</table>");
    puts("</form>");
    printf("<script>");
    printf("parent.document.macauth_dblist_fm.innerHTML = document.macauth_dblist_fm.innerHTML;");
    printf("parent.document.macauth_dblist_fm.smenu.value = 'macauth_dblist';");
    printf("</script>");
    macdb_free(v4);
    result = puts("</BODY>");
  }
  else
  {
    result = printf("Memory error: Refresh");
  }
  return result;
}

int __fastcall sub_2C01C(int a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-8h]@1

  v5 = a3;
  v4 = 0;
  if ( a2 )
    get_intvalue_post(a2, 'b', &v4);
  else
    get_intvalue(a1, 'b', &v4);
  sub_15988("wirelessconf", "macauth");
  printf("<meta name=\"format-detection\" content=\"telephone=no\">");
  puts("<BODY BOTTOMMARGIN=0 RIGHTMARGIN=0 LEFTMARGIN=0 TOPMARGIN=0 MARGINWIDTH=0 MARGINHEIGHT=0 >");
  printf("<form name=\"macauth_pcinfo_fm\" method=post style=\"margin: 0; \">");
  puts("</form>");
  puts("</BODY>");
  printf(
    "<iframe src=\"timepro.cgi?tmenu=iframe&smenu=macauth_pcinfo_status&bssidx=%d\" name=\"macauth_pcinfo_status\" style="
    "\"display:none;\" ></iframe>\n",
    v4);
  return printf(
           "<iframe src=\"timepro.cgi?tmenu=iframe&smenu=macauth_pcinfo_submit&bssidx=%d\" name=\"macauth_pcinfo_submit\""
           " style=\"display:none;\" ></iframe>\n",
           v4);
}

void sub_2C0C4(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r7@1
  signed int v5; // r4@9
  int *v6; // r5@9
  int v7; // r10@9
  int *v8; // r6@12
  const char *v9; // r0@14
  int v10; // r7@16
  int v11; // r0@17
  bool v12; // zf@20
  _BYTE *v13; // r3@23
  int v14; // r8@25
  void *v15; // r7@25
  int v16; // r0@26
  char *v17; // r0@30
  char *v18; // r0@32
  const char *v19; // r1@32
  char *v20; // r0@44
  const char *v21; // r1@45
  int v22; // r2@45
  int v23; // r7@52
  int v24; // r11@52
  int v25; // r1@52
  int v26; // r7@52
  int v27; // r9@52
  int v28; // r1@52
  int v29; // r7@52
  int v30; // r10@52
  int v31; // r1@52
  int v32; // r7@52
  int v33; // ST28_4@54
  char *s1; // ST24_4@54
  int v35; // ST2C_4@54
  int v36; // r0@54
  char *v37; // ST24_4@56
  int v38; // r11@56
  int v39; // r0@56
  int v40; // r3@58
  char *v41; // r0@58
  const char *v42; // r2@58
  const char *v43; // r2@60
  char *v44; // r0@60
  int v45; // r3@60
  int v46; // r0@62
  signed int v47; // r1@66
  int v48; // [sp+0h] [bp-3FA0h]@58
  int v49; // [sp+0h] [bp-3FA0h]@60
  int v50; // [sp+4h] [bp-3F9Ch]@0
  int v51; // [sp+4h] [bp-3F9Ch]@58
  int v52; // [sp+8h] [bp-3F98h]@58
  int v53; // [sp+Ch] [bp-3F94h]@0
  int i; // [sp+30h] [bp-3F70h]@11
  int v55; // [sp+34h] [bp-3F6Ch]@11
  void *ptr; // [sp+38h] [bp-3F68h]@9
  int v57; // [sp+3Ch] [bp-3F64h]@9
  int v58; // [sp+40h] [bp-3F60h]@9
  int v59; // [sp+44h] [bp-3F5Ch]@13
  int v60; // [sp+48h] [bp-3F58h]@9
  int v61; // [sp+3368h] [bp-C38h]@4
  int v62; // [sp+336Ch] [bp-C34h]@5
  char v63; // [sp+38C0h] [bp-6E0h]@36
  int v64; // [sp+38E0h] [bp-6C0h]@25
  char v65; // [sp+3AC0h] [bp-4E0h]@36
  int v66; // [sp+3AE0h] [bp-4C0h]@19
  int v67; // [sp+3CE0h] [bp-2C0h]@25
  int v68; // [sp+3D60h] [bp-240h]@51
  int v69; // [sp+3DE0h] [bp-1C0h]@44
  int v70; // [sp+3E60h] [bp-140h]@5
  int v71; // [sp+3EE0h] [bp-C0h]@25
  int v72; // [sp+3F20h] [bp-80h]@52
  int v73; // [sp+3F24h] [bp-7Ch]@52
  int v74; // [sp+3F28h] [bp-78h]@52
  int v75; // [sp+3F2Ch] [bp-74h]@52
  int v76; // [sp+3F4Ch] [bp-54h]@7
  int v77; // [sp+3F6Ch] [bp-34h]@52
  int v78; // [sp+3F70h] [bp-30h]@7
  int v79; // [sp+3F74h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  v79 = 0;
  v4 = hwinfo_get_max_macauth(a1);
  sub_15988("wirelessconf", "macauth");
  if ( v2 )
    get_intvalue_post(v2, 'b', &v79);
  else
    get_intvalue(v3, 'b', &v79);
  memset(&v61, 0, 0x578u);
  if ( !read_mbssid_conf(v79, &v61) )
    return;
  sub_149EC(&v62);
  sf_strncpy(&v70);
  if ( v79 < 0 )
    v79 = 0;
  if ( !get_active_wl(SHIWORD(v79), &v76, &v78) )
    sf_strncpy(&v76);
  v5 = 0;
  v6 = &v58;
  v58 = 0;
  sf_strncpy(&v60);
  v7 = dhcpd_get_all_dynamic_lease(0, 0);
  ptr = malloc(108 * v7);
  v57 = dhcpd_get_all_dynamic_lease(ptr, v7);
  puts("<BODY BOTTOMMARGIN=0 RIGHTMARGIN=0 LEFTMARGIN=0 TOPMARGIN=0 MARGINWIDTH=0 MARGINHEIGHT=0 >");
  printf("<form name=\"macauth_pcinfo_fm\" method=post style=\"margin: 0; \">");
  printf("<input type=hidden name=\"tmenu\" value=\"iframe\">");
  printf("<input type=hidden name=\"smenu\" value=\"macauth_pcinfo_status\">");
  printf("<input type=hidden name=\"act\" value=\"\">");
  printf("<input type=hidden name=\"bssidx\" value=%d>", v79);
  printf("<input type=hidden name=\"maxmac_count\" value=\"%d\">", v4);
  printf("<table cellspacing=0px cellpadding=0px width=100%% border=0 style='border-collapse: collapse; width: 100%%;'>");
  printf("<colgroup><COL width=\"21%%\"><COL width=\"15%%\"><COL width=\"17%%\"><COL width=\"47%%\"></colgroup>\n");
  if ( wireless_api_get_run(&v76) )
  {
    v55 = macdb_read(v79, v4);
    wireless_api_get_station_list(&v58);
    for ( i = 0; ; ++i )
    {
      if ( i >= v58 )
        goto LABEL_71;
      v8 = &v58 + 51 * i + 10;
      convert_mac(&v58 + 51 * i + 10);
      if ( !(_BYTE)v70 )
        break;
      if ( !(v59 & 0x20) )
        break;
      v9 = (const char *)sub_149EC(&v58 + 51 * i + 25);
      if ( !strcmp(v9, (const char *)&v70) )
        break;
LABEL_67:
      v6 += 51;
    }
    if ( v55 )
    {
      v11 = macdb_binary_search(v55, v8);
      v10 = v11;
      if ( v11 && *(_DWORD *)(v11 + 12) )
        sf_strncpy(&v66);
    }
    else
    {
      v10 = 0;
    }
    v12 = v55 == 0;
    if ( v55 )
      v12 = v10 == 0;
    if ( v12 || (v13 = *(_BYTE **)(v10 + 12)) == 0 || !*v13 )
    {
      v14 = 0;
      memset(&v71, 0, 0x40u);
      get_ip_by_hwaddr(&v71, v8);
      memset(&v67, 0, 0x80u);
      memset(&v64, 0, 0x200u);
      v15 = ptr;
      while ( v14 < v57 )
      {
        v16 = maccmp((char *)v15 + 20, v8);
        v15 = (char *)v15 + 108;
        if ( !v16 )
        {
          sf_strncpy(&v67);
          break;
        }
        ++v14;
      }
      v17 = (char *)convert_euckr_to_utf8(&v67, &v64);
      if ( (_BYTE)v71 )
      {
        if ( (_BYTE)v64 )
        {
          sprintf((char *)&v66, "%s(%s)", &v71, &v64);
          goto LABEL_43;
        }
        v18 = (char *)&v66;
        v19 = (const char *)&v71;
      }
      else
      {
        if ( (_BYTE)v64 )
        {
          v17 = &v65;
          v19 = &v63;
        }
        else
        {
          v19 = "";
        }
        if ( (_BYTE)v64 )
        {
          v18 = v17 + 32;
          v19 += 32;
        }
        else
        {
          v18 = &v65;
        }
        if ( !(_BYTE)v64 )
          v18 += 32;
      }
      strcpy(v18, v19);
    }
LABEL_43:
    if ( v59 & 8 )
    {
      v20 = (char *)&v69;
      if ( v6[57] )
      {
        sprintf((char *)&v69, "%u %% (%d dBm)", v6[24]);
        goto LABEL_51;
      }
      v21 = "%u %%";
      v22 = v6[24];
    }
    else
    {
      v20 = (char *)&v69;
      if ( !(v59 & 1) )
      {
        strcpy((char *)&v69, "");
LABEL_51:
        strcpy((char *)&v68, "");
        if ( !(v59 & 0x10) )
        {
LABEL_66:
          printf(
            "<tr id=\"mac_row_%d\" style=\"cursor:pointer; background-color:#%s; height: 20px; \" onclick=\"ClickMac(%d, '%s', '%s');\">",
            v5);
          v47 = v5++;
          printf(
            "<td name=\"pcmac\" style=\"padding-left:5px; \" onclick=\"ClickMac('%d', '%s', '%s')\">%s</td>",
            v47,
            v8,
            &v64,
            v8,
            &v66);
          printf("<td>%s</td>", &v69);
          printf("<td>%s</td>", &v68);
          printf("<td class = \"gray_text\">%s</td>", &v66);
          printf("</tr>");
          goto LABEL_67;
        }
        memset(&v72, 0, 0x2Cu);
        v23 = v6[18];
        v24 = sub_4FAE0(v6[18], 86400);
        v75 = v24;
        sub_4FB88(v23, 86400);
        v26 = v25;
        v27 = sub_4FBA8(v25, 3600);
        v74 = v27;
        sub_4FC84(v26, 3600);
        v29 = v28;
        v30 = sub_4FBA8(v28, 60);
        v73 = v30;
        sub_4FC84(v29, 60);
        v72 = v31;
        v32 = v31;
        get_ux_lang(&v77);
        if ( !strcmp((const char *)&v77, "kr") )
        {
          if ( v24 )
          {
            v33 = sub_15A94(129);
            s1 = (char *)sub_15A94(404);
            v35 = sub_15A94(586);
            v36 = sub_15A94(955);
            snprintf((char *)&v68, 0x80u, "%d%s %d%s %d%s %d%s", v24, v33, v27, s1, v30, v35, v32, v36);
            goto LABEL_66;
          }
          if ( v27 )
          {
            v37 = (char *)sub_15A94(404);
            v38 = sub_15A94(586);
            v39 = sub_15A94(955);
            snprintf((char *)&v68, 0x80u, "%d%s %d%s %d%s", v27, v37, v30, v38, v32, v39);
            goto LABEL_66;
          }
          if ( v30 )
          {
            v48 = sub_15A94(586);
            v52 = sub_15A94(955);
            v40 = v30;
            v51 = v32;
            v41 = (char *)&v68;
            v42 = "%d%s %d%s";
LABEL_63:
            snprintf(v41, 0x80u, v42, v40, v48, v51, v52, v53);
            goto LABEL_66;
          }
          if ( !v32 )
            goto LABEL_66;
          v49 = sub_15A94(955);
          v43 = "%d%s";
          v44 = (char *)&v68;
          v45 = v32;
        }
        else
        {
          if ( v24 )
          {
            v46 = sub_15A94(129);
            v42 = "%d%s %02d:%02d:%02d";
            v48 = v46;
            v40 = v24;
            v41 = (char *)&v68;
            v51 = v27;
            v52 = v30;
            v53 = v32;
            goto LABEL_63;
          }
          v43 = "%02d:%02d:%02d";
          v44 = (char *)&v68;
          v45 = v27;
          v49 = v30;
          v50 = v32;
        }
        snprintf(v44, 0x80u, v43, v45, v49, v50);
        goto LABEL_66;
      }
      v21 = "%d Mbps";
      v22 = v6[21];
    }
    sprintf(v20, v21, v22);
    goto LABEL_51;
  }
  v5 = 0;
LABEL_71:
  while ( v5 <= 6 )
  {
    ++v5;
    sub_2B13C();
  }
  puts("</table>");
  puts("</form>");
  puts("</BODY>");
  printf("<script>");
  printf("updatePcInfo();");
  printf("</script>");
  free(ptr);
}

void sub_2C920(int a1)
{
  int v1; // r4@1
  int v2; // r4@1
  char *v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@2
  int v10; // r0@4
  int v11; // r0@4
  int v12; // r0@4
  int v13; // r0@4
  int v14; // r0@4
  int v15; // r0@4
  int v16; // r0@4
  int v17; // r0@4
  int v18; // r0@5
  int v19; // r0@7
  const char *v20; // r4@7
  int v21; // r0@7
  int v22; // r4@7
  int v23; // r0@7
  int v24; // r0@7
  char v26; // [sp+4h] [bp-44h]@1
  char v27; // [sp+24h] [bp-24h]@1
  int v28; // [sp+34h] [bp-14h]@1

  v1 = a1;
  v28 = 0;
  sub_15988("wirelessconf", "macauth");
  get_intvalue(v1, 'b', &v28);
  v2 = sub_13EC4(v1);
  sf_strncpy(&v27);
  v3 = getenv("REMOTE_ADDR");
  get_internal_pc_hardware_address(v3, &v26);
  convert_mac(&v26);
  v28 |= v2 << 16;
  printf("<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\"/>");
  printf("<form method=get action=\"timepro.cgi\" name=\"macauth_fm\">");
  printf("<input type=hidden name=tmenu value=wirelessconf%s>");
  printf("<input type=hidden name=\"smenu\" value=\"macauth\">");
  printf("<input type=hidden name=\"act\" value=\"\">");
  printf("<input type=hidden name=\"wl_mode\" value=%d>", v2);
  printf("<input type=hidden name=bssidx>");
  printf("<table border=0 style='width: 100%%; border-collapse: collapse; background-color: #EEE;'>");
  printf("<colgroup><COL width=\"20.5%%\"><COL width=\"15%%\"><COL width=\"17%%\"><COL width=\"32.5%%\"><COL width=\"15%%\"></colgroup>\n");
  printf("<tr><td height=104px colspan=6>");
  printf(
    "<iframe src=\"timepro.cgi?tmenu=iframe&smenu=macauth_bsslist&wl_mode=%d&bssidx=%d\" frameborder=\"no\" scrolling=\"y"
    "es\" name=\"macauth_bsslist\" noresize height=104 width=100%% ></iframe>\n",
    v2,
    v28);
  printf("</td></tr>");
  printf("<tr><td style=\"padding-left:5px; background-color:#e6e6e6; border-style:solid; border-color:#c5c5c5; border-width:1px;\" height=30px colspan=6>");
  printf("<p id=ssid_status></p>");
  printf("</td></tr>");
  printf("<tr height=25px>");
  printf(
    "<td align=left style=\"padding-left:5px; border-style:solid none solid solid; border-width:1px; border-color:#dddddd"
    ";\"><span>%s</span></td>", sub_15A94(543));
  printf(
    "<td style=\"border-style:solid none solid none; border-width:1px; border-color:#dddddd;\"><span>%s</span>", sub_15A94(553));
  printf("<td style=\"border-style:solid none solid none; border-width:1px; border-color:#dddddd;\"><span>%s</span>", sub_15A94(544));
  printf("<td style=\"border-style:solid none solid none; border-width:1px; border-color:#dddddd;\" colspan=2 ><span>%s</span>",
    sub_15A94(546));
  printf("</tr>");
  if ( is_mobile_agent("<tr><td colspan=6>") )
  {
    sub_1590C("140px", "100%", "display:inline-block;");
    v9 = printf("<iframe frameborder=\"no\" scrolling=\"yes\" name=\"macauth_pcinfo\" noresize height=140 width=100%% ></iframe>\n");
    sub_15958(v9);
  }
  else
  {
    printf("<iframe frameborder=\"no\" scrolling=\"yes\" name=\"macauth_pcinfo\" noresize height=140 width=100%% ></iframe>\n");
  }
  printf("</td></tr>");
  printf("<tr height=1px style=\"background-Color:#dddddd\"><td colspan=6></td></tr>");
  printf("<tr><td height=30px colspan=6 style=\"padding-left:5px;\"><b style=\"margin-right:26px;\">%s</b>", sub_15A94(539));
  sub_141A4("hw", 0, 0);
  print_nbsp(2);
  printf("<input type=text name=\"info\" size=28 maxlength=64 value=\"%s\" onfocus=\"FocusMacAuthInfo();\" style=\"color:#8888""88; height: 18px;\">",
    sub_15A94(251));
  printf("<input type=hidden name=\"default_info\" value=\"%s\">", sub_15A94(251));
  printf("<button type='button' onclick=\"ManualRegisterMacAuth( '%s' );\" style=\"margin-left:23px; padding-top:0; padding-bo"
    "ttom:0; \"><img src=\"/images2/plus_icon.gif\" style=\"margin: 0 2px 2px 0; \">%s</button>", &v26, sub_15A94(556));
  printf("</td></tr>");
  printf("<tr height=25px>");
  printf("<td colspan=3 align=left style=\"padding-left:5px; border-style:solid none solid solid; border-width:1px; border-col"
    "or:#dddddd;\"><span>%s</span></td>",
    sub_15A94(547));
  printf("<td style=\"padding-left:5px; border-style:solid none solid none; border-width:1px; border-color:#dddddd;\"><span>%s</span>",
    sub_15A94(546));
  printf("<td style=\"padding-left:5px; border-style:solid none solid none; border-width:1px; border-color:#dddddd;\">");
  convert_mac2(&v26);
  printf("<span onclick=\"UnRegisterMacAuth( '%s' );\" style=\"cursor:pointer;\"><img src=\"/images2/minus_icon.gif\" style=\""
    "margin:0 2px 2px 0; \">%s</span>",
    &v26,
    sub_15A94(134));
  printf("<input type=\"checkbox\" name=\"del_allchk\" style=\"float: right; margin-right: 29px;\" onclick=\"CheckAllCheckBox(macauth_dblist.macauth_dblist_submit.document, this, 'rmmacchk');CheckAllCheckBox(macauth_dblist.document, this, 'rmmacchk');\"></td>");
  printf("</tr>");
  if ( is_mobile_agent("<tr><td colspan=6>") )
  {
    sub_1590C("140px", "100%", "display:inline-block;");
    sub_15958("<iframe frameborder=\"no\" scrolling=\"yes\" name=\"macauth_dblist\" noresize height=140 width=100%% ></iframe>\n");
  }
  else
  {
    printf("<iframe frameborder=\"no\" scrolling=\"yes\" name=\"macauth_dblist\" noresize height=140 width=100%% ></iframe>\n");
  }
  printf("</td></tr>");
  printf("<tr style=\"border-style: solid; border-width:1px 0 1px 0; border-color: #ccc; height: 30px;\"><td colspan=3 align=left>");
  printf("<span style=\"margin-left: 5px;\" class=\"gray_text\">");
  v20 = (const char *)sub_15A94(568);
  v21 = hwinfo_get_max_macauth(sub_15A94(568));
  printf(v20, v21);
  printf("</span>");
  printf("</td><td colspan=3 align=right></td></tr>");
  printf("</form>");
  printf("</table>");
  printf("<script>");
  printf("addEvent();");
  printf("</script>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  v23 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf("<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    sub_14BF4(v23));
  printf("</SPAN></td>");
  printf(
    "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:"
    "middle; display:block; text-align:center;\">%s\n",
    sub_15A94(31));
  printf("</SPAN></td>");
  printf("</tr>");
}

void sub_2CDF4()
{
  printf("<div id=connected_apinfo style=\"display: none;\">");
  printf("<input type=hidden name=m_ssid value=''>");
  printf("<input type=hidden name=m_personal_list value=''>");
  printf("<input type=hidden name=bssid value=''>");
  printf("</div>");
}

void sub_2CE38(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int v3; // r0@1
  char *v4; // r5@2
  int v5; // r0@6
  char *v6; // r5@7
  int v7; // r0@11
  char *v8; // r5@12
  int v9; // r0@15
  char *v10; // r5@16
  int v11; // r0@19
  int v12; // r0@19
  int v13; // r0@19
  int v14; // r0@19
  char *v15; // r8@20
  int v16; // r0@22
  char *v17; // r2@23
  char *v18; // r2@28
  char *v19; // r2@32
  char *v20; // r2@36
  char *v21; // r2@40
  char *v22; // r2@44
  char *v23; // r2@48
  char *v24; // r2@52
  char *v25; // r2@56
  char *v26; // r5@60
  int v27; // r0@64
  char *v28; // r5@65
  int v29; // r0@69
  char *v30; // r5@70
  int v31; // r0@74
  int v32; // r0@74
  int v33; // r5@74
  char *v34; // r0@74
  int v35; // r0@74
  int v36; // r0@74
  int v37; // r5@74
  char *v38; // r0@74
  int v39; // r0@74
  int v40; // r1@75
  const char *v41; // r0@75
  int v42; // r0@77
  const char *v43; // r0@77
  char *v44; // r0@79
  const char *v45; // r2@79
  char *v46; // r3@79
  int v47; // r0@81
  int v48; // r0@84
  int v50; // [sp+Ch] [bp-C8Ch]@1
  int v51; // [sp+584h] [bp-714h]@1
  int v52; // [sp+608h] [bp-690h]@1
  int v53; // [sp+754h] [bp-544h]@1
  int v54; // [sp+758h] [bp-540h]@19
  int v55; // [sp+7D8h] [bp-4C0h]@19
  int v56; // [sp+7ECh] [bp-4ACh]@22
  int v57; // [sp+7F0h] [bp-4A8h]@19
  int v58; // [sp+868h] [bp-430h]@74
  int v59; // [sp+8D4h] [bp-3C4h]@3
  int v60; // [sp+920h] [bp-378h]@1
  char v61; // [sp+950h] [bp-348h]@1
  int v62; // [sp+B7Ch] [bp-11Ch]@84
  char s; // [sp+BD0h] [bp-C8h]@79
  char v64; // [sp+C50h] [bp-48h]@1
  char v65; // [sp+C70h] [bp-28h]@1

  v1 = a1;
  sub_15988("wirelessconf", "multibridge");
  sf_strncpy(&v65);
  read_wireless_conf(&v51, &v65);
  sub_139E0(&v65);
  printf("<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\"/>");
  printf("<form method=post action=timepro.cgi name=mbridge_fm style=\"margin-bottom: 0;\" >");
  printf("<input type=hidden name=tmenu value=wirelessconf%s>");
  printf("<input type=hidden name=smenu value=multibridge>");
  printf("<input type=hidden name=act value=>");
  printf("<input type=hidden name=wl_mode value=%d>", sub_13EC4(v1));
  printf("<input type=hidden name=mode value=%d>", v52);
  printf("<input type=hidden name=country value=%s>", &v61);
  printf("<input type=hidden name=channel_width value=%d>", v60);
  strcmp(&v65, "eth1");
  sf_strncpy(&v64);
  read_wireless_conf(&v50, &v64);
  printf("<input type=hidden name=other_wwan_enable value=%d>");
  puts("<table class=v3_table>");
  printf("<tr valign=top><td>");
  printf("<table width=100%% style=\"background-color:#eeeeee; border-collapse:collapse;\" cellpadding=0 cellspacing=0>\n");
  printf("<colgroup><COL width=19%%><COL width=34%%><COL width=31%%><COL width=16%%></colgroup>");
  printf("<tr height=24px style=\"background-color:#FFFFFF; border-bottom: 1px solid #CCC; \">");
  printf("<td id=status_td colspan=4 align=left style=\"padding:0 0 0 5;\">");
  printf("</td>");
  printf("</tr>");
  printf("<tr style=\"background-color: #FFFFFF; height: 24px; \"><td style=\"padding-left:5px;\">%s</td>", sub_15A94(598));
  printf("<td colspan=3>");
  puts("<select name=run style= \"width: 205px; height: 20px; border: 1px solid #CCC;\" onchange=\"SetWirelessForm(document, document.mbridge_fm);\">");
  if ( v53 )
  {
    if ( v59 )
      v4 = "selected";
    else
      v4 = "";
  }
  else
  {
    v4 = "";
  }
  printf("<option value=\"wan\" %s>%s</option>\n", v4, sub_15A94(1323));
  if ( sub_15A94(1323) )
  {
    if ( v59 )
      v6 = "";
    else
      v6 = "selected";
  }
  else
  {
    v6 = "";
  }
  printf("<option value=\"bridge\" %s>%s</option>\n", v6, sub_15A94(59));
  if ( v53 )
  {
    v8 = "";
  }
  else
  {
    v8 = "";
    if ( is_wds_enable(v2) )
      v8 = "selected";
  }
  printf("<option value=\"wds\" %s>%s</option>\n", v8, sub_15A94(1258));
  if ( v53 )
  {
    v10 = "";
  }
  else
  {
    v10 = "";
    if ( !is_wds_enable(v2) )
      v10 = "selected";
  }
  printf("<option value=\"0\" %s>%s</option>\n", v10, sub_15A94(971));
  printf("</td>");
  printf("</tr>");
  printf("<tr style=\"background-color: #F7F7F7; height: 24px; \"><td style=\"padding-left:5px;\">%s</td>", sub_15A94(803));
  printf("<td colspan=3>");
  printf("<input type=text name=ssid maxlength=32 style=\"width: 205px; padding-left: 4px; border-style:solid;border-color:#88"
    "8;border-width:1px; \" value='%s'>\n", sub_149EC(&v54));
  printf("<input type=hidden name=bssid value=\"%s\">\n", &v55);
  printf("</td>");
  printf("</tr>");
  printf("<tr id=\"tr_pw\" style=\"display:none; background-color: #FFFFFF; height: 24px; \"><td style=\"padding-left:5px;\">%s</td>", sub_15A94(45));
  printf("<td>");
  puts("<select name=personal_list style=\"width:205px; height: 20px; border: 1px solid #CCC;\" onchange=\"SetWirelessForm(document,document.mbridge_fm);\">");
  if ( v57 )
    v15 = "";
  else
    v15 = "selected";
  printf("<option value=\"%s\" %s>%s \n", "nouse", v15, sub_15A94(820));
  if ( v56 == 9 )
  {
    if ( v57 == 4 )
      v17 = "selected";
    else
      v17 = "";
  }
  else
  {
    v17 = "";
  }
  printf("<option value=\"%s\" %s>%s \n", "wpa2psk_aes", v17, "WPA2PSK + AES");
  if ( v56 == 10 )
  {
    v18 = "selected";
    if ( v57 != 4 )
      v18 = "";
  }
  else
  {
    v18 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpapsk", v18, "WPAPSK/");
  if ( v56 == 5 )
  {
    v19 = "selected";
    if ( v57 != 4 )
      v19 = "";
  }
  else
  {
    v19 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpapsk_aes", v19, "WPAPSK + AES");
  if ( v56 == 9 )
  {
    v20 = "selected";
    if ( v57 != 5 )
      v20 = "";
  }
  else
  {
    v20 = "";
  }
  printf("<option value=\"%s\" %s>%s \n", "wpa2psk_tkipaes", v20, "WPA2PSK + TKIP/AES");
  if ( v56 == 10 )
  {
    v21 = "selected";
    if ( v57 != 5 )
      v21 = "";
  }
  else
  {
    v21 = "";
  }
  printf("<option value=\"%s\" %s>%s \n", "wpapsk", v21, "WPAPSK/");
  if ( v56 == 5 )
  {
    v22 = "selected";
    if ( v57 != 5 )
      v22 = "";
  }
  else
  {
    v22 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpapsk_tkipaes", v22, "WPAPSK + TKIP/AES");
  if ( v56 == 5 )
  {
    v23 = "selected";
    if ( v57 != 3 )
      v23 = "";
  }
  else
  {
    v23 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpapsk_tkip", v23, "WPAPSK + TKIP");
  if ( v56 == 9 )
  {
    v24 = "selected";
    if ( v57 != 3 )
      v24 = "";
  }
  else
  {
    v24 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpa2psk_", v24, "WPA2PSK + TKIP");
  if ( v56 == 10 )
  {
    v25 = "selected";
    if ( v57 != 3 )
      v25 = "";
  }
  else
  {
    v25 = "";
  }
  printf("<option value=\"%s\" %s>%s", "wpapsk", v25, "WPAPSK/");
  if ( v56 == 3 )
  {
    if ( (unsigned int)(v57 - 1) > 1 )
      v26 = "";
    else
      v26 = "selected";
  }
  else
  {
    v26 = "";
  }
  printf("<option value=\"%s\" %s>%s%s", "auto_wep", v26, sub_15A94(800), " + WEP");
  if ( v56 == 1 )
  {
    if ( (unsigned int)(v57 - 1) > 1 )
      v28 = "";
    else
      v28 = "selected";
  }
  else
  {
    v28 = "";
  }
  printf("<option value=\"%s\" %s>%s%s", "open_wep", v28, sub_15A94(801), " + WEP");
  if ( v56 == 2 )
  {
    if ( (unsigned int)(v57 - 1) > 1 )
      v30 = "";
    else
      v30 = "selected";
  }
  else
  {
    v30 = "";
  }
  printf("<option value=\"%s\" %s>%s%s", "key_wep", v30, sub_15A94(802), " + WEP");
  puts("</select>");
  printf("</td>");
  printf("<td>");
  printf("<span id=wpapsk_key>");
  printf(
    "<input type=password size=60 maxlength=64 name=wpapsk_key value='%s' style=\"width:115px;height:20px; margin-right: "
    "5px; padding-left: 4px; ime-mode:disabled; border: 1px solid #CCC; \">",
    &v58);
  printf(
    "<input type=text size=60 maxlength=64 name=wpapsk_key_text style=\"width:115px;height:20px;display:none; margin-righ"
    "t: 5px; padding-left: 4px; ime-mode:disabled; border: 1px solid #CCC; \" value='%s'>",
    &v58);
  printf(
    "<INPUT TYPE=checkbox id=wpapsk_password_view NAME=wpapsk_password_view value=1 style= \"vertical-align: bottom;\" on"
    "click=\"PasswordView(wpapsk_key,wpapsk_key_text,wpapsk_password_view);\" ><label for=wpapsk_password_view> %s</label>", sub_15A94(1238));
  printf("</span>");
  printf("</td>");
  printf("<td align=left><input type=button name=apply_bt value=\"%s\" style=\"padding: 0 15px 0 15px; \" onclick=\"ApplyMBrid"
    "ge(document.mbridge_fm,'apply', %d);\"></td>",
    sub_15A94(32), get_wireless_mode_by_ipaddr(getenv("REMOTE_ADDR")));
  printf("</tr>");
  printf("<tr id=\"tr_hwaddr\" style=\"background-color: #FFF; height: 24px; \"><td style=\"padding-left:5px;\">%s</td>",
    sub_15A94(1259));
  printf("<td colspan=2>");
  sub_141A4("wdshw", 0, 0);
  printf("</td>");
  printf("<td align=left><input type=button name=apply_bt value=\"%s\" style=\"padding: 0 15px 0 15px; \" onclick=\"ApplyMBrid"
    "ge(document.mbridge_fm,'apply', %d)\"></td>",
    sub_15A94(32),
    get_wireless_mode_by_ipaddr(getenv("REMOTE_ADDR")));
  printf("</tr>");
  printf("<tr height=24px style=\"background-color:#eeeeee; border-top: 1px solid #CCC; \">");
  if ( v2 )
  {
    v40 = sub_15A94(600)
    v41 = "<td colspan= 3 style=\"padding-left:5;\"><span style=\"margin-left: 2px; \">5GHz %s</span></td>";
  }
  else
  {
    v40 = sub_15A94(600);
    v41 = "<td colspan= 3 style=\"padding-left:5;\"><span style=\"margin-left: 2px; \">2.4GHz %s</span></td>";
  }
  printf(v41, v40);
  printf("<td id=\"apscan_button\" onclick=\"startAPScan('%s');\" style=\"cursor:pointer\">", &v65);
  printf("<img style=\"border:none\" src=\"/images2/apscan.gif\"> %s", sub_15A94(36));
  printf("</td>");
  printf("</tr>");
  printf("</table>");
  printf("</table></td></tr>");
  printf("<tr style=\"border-style: solid; border-color: #CCC; border-width: 1px 0 1px 0;  \"><td style=\"background-color:#ffffff; padding: 0; \" >");
  v43 = (const char *)get_pvalue(v1, "act");
  if ( v43 && !strcmp(v43, "apply") )
  {
    v44 = &s;
    v45 = (const char *)"timepro.cgi?tmenu=iframe&smenu=ap_list&ifname=%s&act=";
    v46 = &v65;
  }
  else
  {
    v45 = "timepro.cgi?tmenu=iframe&smenu=ap_list&ifname=%s";
    v44 = &s;
    v46 = &v65;
  }
  v47 = snprintf(v44, 0x80u, v45, v46);
  if ( is_mobile_agent(v47) )
  {
    printf("<div style=\"height:360px; width:100%%; -webkit-overflow-scrolling: touch; overflow-y:scroll; overflow-x:hidden; display:inline-block;\">");
    printf(
      "<iframe name=\"iframe_aplist\" src=\"%s\" frameborder=no style=\"width: 100%%; height: 360px;\" align=left; scroll"
      "ing=yes></iframe>",
      &s);
    printf("</div>");
  }
  else
  {
    printf(
      "<iframe name=\"iframe_aplist\" src=\"%s\" frameborder=no style=\"width: 100%%; height: 360px;\" align=left; scroll"
      "ing=yes></iframe>",
      &s);
  }
  printf("</td></tr>");
  printf("<tr style=\"height: 51px; background-color: #EEE; \"><td align=left style=\"padding-left:5px;\"><span class=gray_tex"
    "t>%s</span></td></tr>",
    sub_15A94(1325));
  puts("</form>");
  printf("</table>");
  printf("<iframe name=\"iframe_mbridge_apply\" src=\"timepro.cgi?tmenu=iframe&smenu=mbridgeapply&ifname=%s\" frameborder=no s"
    "tyle=\"display: none; \" ></iframe>",
    &v65);
  puts("<script>");
  puts("setHWInputsCss( 'wdshw' );");
  printf("SetWirelessForm(document, document.mbridge_fm);");
  printf("addEvent();");
  printf("</script>");
  strcpy((char *)&v62, "AA:AA:AA:BB:CC:DD");
}

void sub_2D85C(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-30h]@1

  v1 = a1;
  sf_strncpy(&v4);
  convert_mac(&v4);
  printf("<div id=connected_apinfo style=\"display: none;\">");
  printf("<input type=hidden name=m_ssid value='%s'>", sub_149EC(v1 + 8));
  printf("<input type=hidden name=m_personal_list value=''>");
  printf("<input type=hidden name=bssid value='%s'>", &v4);
  printf("</div>");
}

void sub_2D8D8(const char *a1, int a2, int a3)
{
  bool v3; // zf@1
  int v4; // r5@1
  const char *v5; // r2@1
  int v6; // r4@1
  signed int v7; // r3@6
  char *v8; // r0@7
  const char *v9; // r1@7
  char *v10; // r0@13
  int v11; // r0@13
  int v12; // r0@15
  int v13; // r1@17
  const char *v14; // r0@17
  int v15; // r0@19
  const char *v16; // r0@25
  int v17; // r0@26
  int v18; // r3@26
  bool v19; // zf@31
  int v20; // r0@39
  int v21; // r0@41
  const char *v22; // r0@44
  const char *v23; // r0@45
  const char *v24; // r0@48
  char v26; // [sp+8h] [bp-40h]@22
  char dest; // [sp+28h] [bp-20h]@7

  v4 = a3;
  v3 = a3 == 0;
  v5 = a1;
  v6 = a2;
  if ( v3 )
    a1 = "<TR height=%d ID=ap_row_%d STYLE=\"cursor:pointer; background-color:#%s\" ONCLICK=\"ClickAP(%d);\">";
  if ( !v3 )
    a1 = "<TR height=%d ID=ap_row_%d class=\"connected\" STYLE=\"cursor:pointer; background-color:#%s\" ONCLICK=\"ClickAP(%d);\">";
  printf(a1, 24, v5);
  v7 = *(_DWORD *)(v6 + 188);
  if ( v7 <= 74 )
  {
    if ( v7 <= 49 )
    {
      v8 = &dest;
      if ( v7 <= 24 )
        v9 = "on_0";
      else
        v9 = "on_50";
    }
    else
    {
      v8 = &dest;
      v9 = "on_75";
    }
  }
  else
  {
    v8 = &dest;
    v9 = "on_100";
  }
  printf(
    "<TD style=\"padding-left:5px;\"><img style=\"width:15px; height:15px; margin-left: 3px; \" name=wifi_icon src=\"/%s/"
    "wifi_v3_%s.png\"></TD>",
    sub_14BF4(strcpy(v8, v9)),
    &dest);
  printf("<TD valign=top style=\"padding-top:5px;\">");
  if ( v4 )
  {
    if ( *(_BYTE *)v6 )
      v12 = sub_149EC(v6);
    else
    v13 = sub_15A94(817);
    v14 = "<span style=\"max-width: 115px; height:14px; overflow: hidden; text-overflow: ellipsis; display: block; float:"
          " left; margin-right: 4px; \"><b>%s</b></span>";
  }
  else
  {
    if ( *(_BYTE *)v6 )
      v15 = sub_149EC(v6);
    else
      v15 = sub_15A94(817);
    v13 = v15;
    v14 = "<span style=\"max-width: 115px; height:14px; overflow: hidden; text-overflow: ellipsis; display: block; float:"
          " left; margin-right: 4px; \">%s</span>";
  }
  printf(v14, v13);
  sf_strncpy(&v26);
  if ( v26 )
  {
    convert_mac(&v26);
    printf("<span class=gray_text>(%s)</span>", &v26);
  }
  printf("</TD>");
  printf("<TD>");
  if ( !*(_DWORD *)(v6 + 204) )
  {
    v16 = "<span style=\"line-height:200%%\" class=gray_text>";
LABEL_30:
    printf(v16);
    goto LABEL_40;
  }
  printf("<span class=gray_text>");
  v17 = sub_14C30("lock_black.gif");
  printf("<img style=\"margin-top:5px;\" src=\"%s\" border=0> ", v17);
  v18 = *(_DWORD *)(v6 + 208);
  if ( (unsigned int)(v18 - 9) <= 1 )
  {
    v16 = "WPA2";
    goto LABEL_30;
  }
  if ( v18 == 5 )
  {
    v16 = "WPA";
    goto LABEL_30;
  }
  v19 = v18 == 8;
  if ( v18 != 8 )
    v19 = v18 == 11;
  if ( v19 )
  {
    v16 = "WPA2-Enterprise";
    goto LABEL_30;
  }
  if ( v18 == 4 )
  {
    v16 = "WPA-Enterprise";
    goto LABEL_30;
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 204) - 1) <= 1 )
  {
    v16 = "WEP";
    goto LABEL_30;
  }
  printf("(%s)", sub_15A94(1203));
LABEL_40:
  printf("</span>");
  printf("</TD>");
  if ( v4 == 1 )
  {
    printf("<TD><span id=ap_status>%s</span></TD>", sub_15A94(1257));
  }
  else
  {
    printf("<TD></TD>");
  }
  if ( *(_DWORD *)(v6 + 168) )
  {
    printf("<TD align=left>");
    printf("<p class=gray_text>");
    printf((const char *)sub_15A94(64), *(_DWORD *)(v6 + 168));
    printf("</p>");
    printf("</TD>");
    printf("<TD align=right style=\"padding-right:5px;\">");
    if ( v4 )
      v23 = "<p id=norm_power class=gray_text style=\"margin-top:1px; padding-top:1px;\">%d%%";
    else
      v23 = "<p class=gray_text style=\"margin-top:1px; padding-top:1px;\">%d%%";
    printf(v23, *(_DWORD *)(v6 + 188));
  }
  else
  {
    printf("<TD colspan= 2 align=left style=\"padding-right:5px;\">");
    printf("<p class=gray_text>");
    printf((const char *)sub_15A94(580));
    printf("</p>");
  }
  printf("</TD>");
  printf("<TD></TD>");
  printf("</TR>");
}

void sub_2DC10(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-50h]@1

  v2 = a1;
  v3 = a2;
  printf("<div id=connected_apinfo style=\"display: none;\">");
  printf("<input type=hidden name=m_ssid value='%s'>", sub_149EC(v2 + 468));
  sub_14754(*(_DWORD *)(v2 + 616), *(_DWORD *)(v2 + 620), &v6);
  printf("<input type=hidden name=m_personal_list value='%s'>", &v6);
  printf("<input type=hidden name=m_wpapsk value='%s'>", v2 + 740);
  printf("<input type=hidden name=bssid value='%s'>", v3);
  printf("</div>");
}

int sub_2DC9C(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@3
  int result; // r0@3
  int v6; // [sp+0h] [bp-70h]@3
  char v7; // [sp+40h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  sf_strncpy(&v7);
  convert_mac(&v7);
  if ( v3 )
    printf("<div id=connected_apinfo style=\"display: none;\">");
  printf("<input type=hidden name=m_ssid value='%s'>", sub_149EC(v2));
  sub_14754(*(_DWORD *)(v2 + 208), *(_DWORD *)(v2 + 204), &v6);
  printf("<input type=hidden name=m_personal_list value='%s'>", &v6);
  result = printf("<input type=hidden name=bssid value='%s'>", &v7);
  if ( v3 )
    result = printf("</div>");
  return result;
}

int sub_2DD44(int a1, int a2)
{
  int v2; // r2@1
  int v3; // r1@1
  int result; // r0@2
  int v5; // [sp+0h] [bp-410h]@3
  char v6; // [sp+200h] [bp-210h]@3

  v2 = *(_DWORD *)(a2 + 188);
  v3 = *(_DWORD *)(a1 + 188);
  if ( v3 == v2 )
  {
    sf_strncpy(&v6);
    sf_strncpy(&v5);
    strtoupper(&v6);
    strtoupper(&v5);
    result = strcmp(&v6, (const char *)&v5);
  }
  else
  {
    result = v3 < v2;
  }
  return result;
}

int sub_2DDBC(int a1)
{
  int v1; // r4@1
  int v2; // r5@3
  int v3; // r0@27
  int v4; // r0@27
  char v6; // [sp+4h] [bp-6B4h]@3
  int v7; // [sp+1D4h] [bp-4E4h]@4
  int v8; // [sp+1D8h] [bp-4E0h]@21
  int v9; // [sp+26Ch] [bp-44Ch]@23
  int v10; // [sp+270h] [bp-448h]@23
  char v11; // [sp+2E8h] [bp-3D0h]@25
  int v12; // [sp+354h] [bp-364h]@4
  char v13; // [sp+358h] [bp-360h]@27
  int v14; // [sp+378h] [bp-340h]@26
  int v15; // [sp+57Ch] [bp-13Ch]@6
  int v16; // [sp+584h] [bp-134h]@12
  int v17; // [sp+5A8h] [bp-110h]@10
  int v18; // [sp+5BCh] [bp-FCh]@12
  int v19; // [sp+628h] [bp-90h]@12
  int v20; // [sp+63Ch] [bp-7Ch]@5
  int v21; // [sp+65Ch] [bp-5Ch]@1
  int v22; // [sp+67Ch] [bp-3Ch]@3
  int v23; // [sp+69Ch] [bp-1Ch]@8

  v1 = a1;
  if ( !get_value_post(a1, "act", &v21, 32) )
    return 0;
  if ( strcmp((const char *)&v21, "apply") )
    return 0;
  sf_strncpy(&v22);
  read_wireless_conf(&v6, &v22);
  if ( !get_value_post(v1, "run", &v21, 32) )
    return 0;
  v7 = 0;
  v12 = 0;
  while ( wds_get_config(sub_13EEC(v1), 0, &v15) )
  {
    sf_strncpy(&v20);
    convert_mac2(&v20);
    wds_remove(v2, &v20);
  }
  if ( strcmp((const char *)&v21, "wds") )
  {
    if ( !strcmp((const char *)&v21, "wan") || !strcmp((const char *)&v21, "bridge") )
    {
      if ( !get_value_post(v1, "run", &v20, 32) )
        return 0;
      v7 = 1;
      if ( !strcmp((const char *)&v20, "wan") )
      {
        v12 = 1;
        system("/sbin/ifconfig eth0");
      }
      else if ( !strcmp((const char *)&v20, "bridge") )
      {
        v12 = 0;
      }
      if ( get_value_post(v1, "ssid", &v20, 32) )
        sf_strncpy(&v8);
      if ( !get_value_post(v1, "personal_list", &v20, 32) )
        return 0;
      sub_14520(&v20, 0, &v9, &v10);
      if ( (unsigned int)(v10 - 3) <= 2 )
      {
        if ( !get_value_post(v1, "wpapsk_key", &v20, 32) )
          return 0;
        sf_strncpy(&v11);
      }
      v14 = 1;
    }
LABEL_27:
    wireless_api_clear_mbridge_connection_status(&v13);
    write_wireless_conf(&v6, &v22);
    wireless_api_apply_mbssid(v2);
    v3 = signal_start('f');
    v4 = signal_update(v3);
    signal_save(v4);
    return 0;
  }
  if ( get_intvalue_post(v1, "wl_mode", &v23) )
  {
    memset(&v15, 0, 0xC0u);
    if ( get_value_post(v1, "wdshw", &v20, 32) )
    {
      sf_strncpy(&v17);
      convert_mac2(&v17);
      if ( !get_value_post(v1, "ssid", &v20, 32) )
        strcpy((char *)&v20, "");
      sf_strncpy(&v18);
      sf_strncpy(&v16);
      v19 = v23;
      wds_add(&v15);
      goto LABEL_27;
    }
  }
  return 0;
}

int sub_2E168()
{
  return printf("<TR ID=ap_row_%d class=\"connected\" style=\"display: none; \" ></TR>", 0);
}

void sub_2E178(_DWORD *a1, int a2, char *a3)
{
  int v3; // r11@1
  _DWORD *v4; // r10@1
  int v5; // r6@1
  char *v6; // r7@1
  char *v7; // r5@2
  int i; // r8@4
  int v9; // r4@9
  signed int v10; // r3@12
  signed int v11; // r9@16
  signed int v12; // r10@18
  int v13; // r2@25
  char *v14; // r0@29
  const char *v15; // r1@29
  char *v16; // r0@37
  int v17; // r0@37
  int v18; // r0@37
  char *v19; // r0@39
  int v20; // r3@46
  int v21; // r7@49
  const char *v22; // r0@52
  int v23; // r0@53
  bool v24; // zf@60
  int v25; // r0@66
  int v26; // r0@67
  int v27; // r0@69
  const char *v28; // r0@71
  const char *v29; // r0@71
  int v30; // r1@72
  int v31; // r9@74
  signed int v32; // r0@79
  int v33; // r0@83
  const char *v34; // r0@83
  signed int v35; // r0@86
  int v36; // r0@88
  const char *v37; // r0@90
  const char *v38; // r0@93
  int v40; // [sp+4h] [bp-134h]@53
  char v41; // [sp+Ch] [bp-12Ch]@2
  char s1; // [sp+E0h] [bp-58h]@67
  char dest; // [sp+100h] [bp-38h]@29

  v3 = a2 + 852;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( !get_ifstatus(a2 + 852) || (v7 = &v41, !wireless_api_get_mbridge_status(v3, &v41)) )
    v7 = 0;
  for ( i = 0; i < *v4; ++i )
  {
    if ( !strcmp((const char *)&v4[53 * i + 12], (const char *)(v5 + 468)) )
      goto LABEL_10;
  }
  if ( i == *v4 )
  {
    v9 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v9 = (int)&v4[53 * i + 12];
LABEL_11:
  printf("<TR ID=ap_row_%d class=\"connected\" STYLE=\"height:24px; cursor:pointer; background-color:#%s\" ONCLICK=\"ClickAP(%d);\">");
  if ( v7 )
  {
    v10 = *((_DWORD *)v7 + 47);
  }
  else if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 188);
  }
  else
  {
    v10 = 0;
  }
  v11 = (signed int)v7;
  if ( v7 )
    v11 = 1;
  v12 = v9;
  if ( v9 )
    v12 = 1;
  if ( v12 & v11 && !*((_DWORD *)v7 + 47) )
  {
    v10 = *(_DWORD *)(v9 + 188);
    *((_DWORD *)v7 + 47) = v10;
  }
  if ( !(v12 | v11) )
  {
    v14 = &dest;
    goto LABEL_36;
  }
  if ( v10 )
    v13 = 0;
  else
    v13 = v11 & 1;
  if ( !v13 && v10 <= 74 )
  {
    if ( v10 > 49 )
    {
      v14 = &dest;
      v15 = "on_75";
      goto LABEL_37;
    }
    v14 = &dest;
    if ( v10 > 24 )
    {
      v15 = "on_50";
      goto LABEL_37;
    }
LABEL_36:
    v15 = "on_0";
    goto LABEL_37;
  }
  v14 = &dest;
  v15 = "on_100";
LABEL_37:
  printf("<TD style=\"padding-left:5px;\"><img style=\"height:15px; width:15px; margin-left: 3px; \" name=wifi_icon src=\"/%s/"
    "wifi_v3_%s.png\"></TD>", sub_14BF4(strcpy(v14, v15)),
    &dest);
  printf("<TD style=\"padding-top:2px;\">");
  printf("<span><bstyle="margin-right:4px;">%s", sub_149EC(v5 + 468));
  strcpy(v6, "");
  if ( v11 && *(_DWORD *)(v5 + 464) )
  {
    v19 = v6;
  }
  else
  {
    if ( !v12 )
      goto LABEL_43;
    v19 = v6;
  }
  sf_strncpy(v19);
LABEL_43:
  if ( *v6 )
  {
    convert_mac(v6);
    printf("<span class=gray_text>(%s)</span>", v6);
  }
  printf("</TD>");
  printf("<TD>");
  if ( v12 )
    v20 = *(_DWORD *)(v9 + 204);
  else
    v20 = *(_DWORD *)(v5 + 620);
  if ( v12 )
    v21 = *(_DWORD *)(v9 + 208);
  else
    v21 = *(_DWORD *)(v5 + 616);
  if ( v20 )
  {
    v40 = v20;
    printf("<span class=gray_text>");
    printf("<img style=\"margin-top:5px;\" src=\"%s\" border=0> ", sub_14C30("lock_black.gif"));
    if ( (unsigned int)(v21 - 9) > 1 )
    {
      if ( v21 == 5 )
      {
        v22 = "WPA";
      }
      else if ( (unsigned int)(v40 - 1) > 1 )
      {
        v24 = v21 == 8;
        if ( v21 != 8 )
          v24 = v21 == 11;
        if ( v24 )
        {
          v22 = "WPA2-Enterprise";
        }
        else
        {
          if ( v21 != 4 )
          {
            printf("(%s)", sub_15A94(1203));
            goto LABEL_67;
          }
          v22 = "WPA-Enterprise";
        }
      }
      else
      {
        v22 = "WEP";
      }
    }
    else
    {
      v22 = "WPA2";
    }
  }
  else
  {
    v22 = "<span style=\"line-height:200%%\" class=gray_text>";
  }
  printf(v22);
LABEL_67:
  printf("</span>");
  printf("</TD>");
  wireless_api_get_mbridge_connection_status(v3, &s1);
  if ( strcmp(&s1, "CONNECTION_ESTABLISHED") || *(_DWORD *)(v5 + 464) )
  {
    if ( strcmp(&s1, "CONNECTION_ESTABLISHED") )
      v31 = 0;
    else
      v31 = v11 & 1;
    if ( v31 )
    {
      if ( *(_DWORD *)(v5 + 164) <= 2 || wireless_api_get_keyinfo_status(v3) )
      {
        if ( *(_DWORD *)(v5 + 848) )
          v32 = 1535;
        else
          v32 = 575;
      }
      else
      {
        v32 = 577;
      }
      v33 = sub_15A94(v32);
      printf("<TD><span id=ap_status>%s</span></TD>", v33);
      printf("<TD align=left>");
      printf("<p class=gray_text>");
      printf((const char *)sub_15A94(64), *((_DWORD *)v7 + 42));
      printf("</p></TD>");
      printf("<TD align=right style=\"padding-right:5px;\">");
      printf("<p id=norm_power class=gray_text style=\"margin-top:1px; padding-top:1px;\">");
      if ( *((_DWORD *)v7 + 47) )
        printf("%d%%");
    }
    else
    {
      if ( !strcmp(&s1, "CONNECTION_FAILED") )
        v35 = 576;
      else
        v35 = 579;
      printf("<TD><span id=ap_status class=gray_text>%s</span>", sub_15A94(v35));
      printf("</TD>");
      if ( v12 && *(_DWORD *)(v9 + 168) )
      {
        printf("<TD align=left>");
        printf("<p class=gray_text>");
        printf((const char *)sub_15A94(64), *(_DWORD *)(v9 + 168));
        printf("</p>");
        printf("</TD>");
        printf("<TD align=right style=\"padding-right:5px;\">");
        v29 = "<p id=norm_power class=gray_text style=\"margin-top:1px; padding-top:1px;\">%d%%";
        goto LABEL_91;
      }
      printf("<TD colspan= 2 align=left style=\"padding-right:5px;\">");
      printf("<p class=gray_text>");
      printf((const char *)sub_15A94(580));
    }
    printf("</p>");
    goto LABEL_95;
  }
  printf("<TD><span id=ap_status class=gray_text>%s</span>", sub_15A94(970));
  printf("</TD>");
  if ( v12 && *(_DWORD *)(v9 + 168) )
  {
    printf("<TD align=left>");
    printf("<p class=gray_text>");
    printf((const char *)sub_15A94(64), *(_DWORD *)(v9 + 168));
    printf("</p>");
    printf("</TD>");
    printf("<TD align=right style=\"padding-right:5px;\">");
    v29 = "<pid=norm_power class=gray_text style="margin-top:1px; padding-top:1px;">%d%%";
LABEL_91:
    v30 = *(_DWORD *)(v9 + 188);
    goto LABEL_92;
  }
  printf("<TD colspan= 2 align=left style=\"padding-right:5px;\">");
LABEL_92:
  printf("<p class=gray_text>%s</p>", sub_15A94(580));
LABEL_95:
  printf("</TD>");
  printf("<TD></TD>");
  printf("</TR>");
  return i;
}

int __fastcall sub_2E6F4(int a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  int v3; // r0@1
  int v4; // r0@2
  int v5; // r0@6
  int v6; // r0@6
  char v8; // [sp+8h] [bp-40h]@4
  char v9; // [sp+28h] [bp-20h]@1

  v1 = a1;
  printf(
    "<TR height=%d ID=ap_row_%d class=\"connected\" STYLE=\"cursor:pointer; background-color:#%s\" ONCLICK=\"ClickAP(%d);\">",
    24);
  v2 = strcpy(&v9, "on_0");
  v3 = sub_14BF4(v2);
  printf(
    "<TD style=\"padding-left:5px;\"><img style=\"width:15px; height:15px; margin-left: 3px; \" name=wifi_icon src=\"/%s/"
    "wifi_v3_%s.png\"></TD>",
    v3,
    &v9);
  printf("<TD valign=top style=\"padding-top:5px;\">");
  if ( *(_BYTE *)(v1 + 8) )
    v4 = sub_149EC(v1 + 8);
  else
    v4 = sub_15A94(817);
  printf(
    "<span style=\"max-width: 115px; height:14px; overflow: hidden; text-overflow: ellipsis; display: block; float: left;"
    " margin-right: 4px; \"><b>%s</b></span>",
    v4);
  sf_strncpy(&v8);
  if ( v8 )
  {
    convert_mac(&v8);
    printf("<span class=gray_text>(%s)</span>", &v8);
  }
  printf("</TD>");
  printf("<TD><span style=\"line-height:200%%\" class=gray_text></span></TD>");
  v5 = sub_15A94(1257);
  printf("<TD><span id=ap_status>%s</span></TD>", v5);
  v6 = sub_15A94(580);
  printf("<TD colspan=2aligon=left style="padding-right:5px;"><p class=gray_text>%s", v6);
  printf("<TD></TD>");
  printf("</TR>");
}

int sub_2E828(int a1)
{
  int v1; // r5@1
  int result; // r0@1
  const char *v3; // r0@2
  int v4; // r10@2
  const char *v5; // r0@5
  int v6; // r6@8
  int v7; // r9@12
  int v8; // r7@12
  int *v9; // r6@14
  int v10; // r9@16
  int v11; // r0@25
  int v12; // r0@25
  int v13; // r0@25
  int v14; // r0@25
  int v15; // r0@25
  int v16; // r0@25
  int v17; // r0@25
  int v18; // [sp+4h] [bp-3C2Ch]@12
  int v19; // [sp+Ch] [bp-3C24h]@12
  int v20; // [sp+2Ch] [bp-3C04h]@12
  int v21; // [sp+3534h] [bp-6FCh]@12
  int v22; // [sp+3704h] [bp-52Ch]@12
  char v23; // [sp+3708h] [bp-528h]@13
  int v24; // [sp+3888h] [bp-3A8h]@25
  int v25; // [sp+3AACh] [bp-184h]@17
  int v26; // [sp+3AB4h] [bp-17Ch]@23
  int v27; // [sp+3AD8h] [bp-158h]@19
  int v28; // [sp+3B6Ch] [bp-C4h]@8
  int v29; // [sp+3B8Ch] [bp-A4h]@25
  int v30; // [sp+3BACh] [bp-84h]@15
  int v31; // [sp+3BCCh] [bp-64h]@12
  int v32; // [sp+3BECh] [bp-44h]@2
  int v33; // [sp+3C0Ch] [bp-24h]@11

  v1 = a1;
  result = get_pvalue(a1, "ifname");
  if ( result )
  {
    sf_strncpy(&v32);
    v4 = (int)(const char *)get_pvalue(v1, "act");
    if ( (const char *)get_pvalue(v1, "act") )
    {
      if ( !strcmp(v3, "scan") )
      {
        if ( !strcmp((const char *)&v32, "eth2") )
          v5 = "wireless_apscan.2g";
        else
          v5 = "wireless_apscan.5g";
        signal_start(v5);
      }
      v6 = 0;
      snprintf((char *)&v28, 0x20u, "apscan.%s", &v32);
      do
      {
        ++v6;
        sleep(1u);
      }
      while ( v6 != 30 && check_process(&v28) );
      get_intvalue(v1, "apply_bss", &v33);
      result = printf(
                 "<script>parent.location.href = \"timepro.cgi?tmenu=iframe&smenu=ap_list&ifname=%s&apply_bss=%d\";</script>",
                 &v32,
                 v33);
    }
    else
    {
      sf_strncpy(&v31);
      v7 = strcmp((const char *)&v32, "eth1");
      read_wireless_conf(&v21, &v32);
      memset(&v18, v4, 0x3530u);
      sf_strncpy(&v19);
      sf_strncpy(&v20);
      wireless_api_get_ap_list_from_tempfile(&v18);
      sub_15988("wirelessconf", "multibridge");
      printf("<body>");
      printf("<table cellpadding=0 cellspacing=0>");
      v8 = v22;
      if ( v22 )
      {
        if ( v23 )
        {
          v9 = (int *)&v23;
          sub_2E178(&v18, (int)&v21, (char *)&v30);
          sub_2DC10((int)&v21, (int)&v30);
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v10 = v7 == 0;
        v9 = (int *)is_wds_enable(v10);
        if ( v9 )
        {
          v9 = (int *)wds_get_config(v10, v8, &v25);
          if ( v9 )
          {
            while ( v8 < v18 )
            {
              if ( !maccmp(&v18 + 53 * v8 + 44, &v27) )
              {
                v9 = &v18 + 53 * v8 + 12;
                sub_2D8D8(0, (int)(&v18 + 53 * v8 + 12), 1);
                sub_2DC9C((int)(&v18 + 53 * v8 + 12), 1);
                goto LABEL_25;
              }
              ++v8;
            }
            v9 = &v26;
            sub_2E6F4((int)&v25);
            sub_2D85C((int)&v25);
          }
        }
        else
        {
          sub_2E168();
          sub_2CDF4();
        }
      }
LABEL_25:
      printf("</table>");
      wireless_api_get_mbridge_connection_status(&v24, &v29);
      printf("<script>");
      printf("printStatus( {");
      printf("\tstatus_list : { ");
      printf("\t\tstopped : \"%s\", ", sub_15A94(970));
      printf("\t\tinvalid_pw : \"%s\", ", sub_15A94(577));
      printf("\t\twwan_connected : \"%s\", ", sub_15A94(1535));
      printf("\t\tbridge_connected : \"%s\", ", sub_15A94(575));
      printf("\t\twds_connected : \"%s\", ", sub_15A94(1257));
      printf("\t\ttry_connect : \"%s\",", sub_15A94(579));
      printf("\t\tconnection_failed: \"%s\"", sub_15A94(576));
      printf("\t},");
      printf("\tifname : \"%s\", ", &v32);
      if ( v9 )
        printf("\tssid : \"%s\"", v9);
      else
        printf("\tssid : \"\"");
      printf("});");
      if ( !v22
        || !strcmp((const char *)&v29, "CONNECTION_ESTABLISHED")
        || !strcmp((const char *)&v29, "CONNECTION_FAILED") )
      {
        printf("UnMaskIt(parent.parent.document,'apply_mask');");
      }
      printf("</script>");
      result = printf("</body>");
    }
  }
  return result;
}

void sub_2ECBC(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@2
  int v4; // [sp+0h] [bp-30h]@1

  v2 = a2;
  if ( get_value(a1, "ifname", &v4, 32) || (result = get_value_post(v2, "ifname", &v4, 32)) != 0 )
  {
    sub_2DDBC(v2);
    strcmp((const char *)&v4, "eth1");
    sub_15988("wirelessconf", "multibridge");
    printf("<form method=post action=timepro.cgi name=mbridge_apply_fm>");
    printf("<input type=hidden name=tmenu value=iframe>");
    printf("<input type=hidden name=smenu value=mbridgeapply>");
    printf("<input type=hidden name=ifname value=\"%s\">", &v4);
    printf("<input type=hidden name=act value=>");
    printf("<input type=hidden name=wl_mode value=%d>");
    printf("<input type=hidden name=run>");
    printf("<input type=hidden name=ssid>");
    printf("<input type=hidden name=personal_list>");
    printf("<input type=hidden name=wpapsk_key>");
    printf("<input type=hidden name=wdshw>");
    printf("</form>");
    puts("<script>");
    printf("SetWirelessForm(parent.document, parent.document.mbridge_fm);");
    puts("</script>");
  }
}

int __fastcall sub_2EE00(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  const char *v3; // r0@2
  int v4; // r6@3
  const char *v5; // r5@3
  int v6; // r7@3
  int v7; // r0@6
  signed int v8; // r4@6
  int v9; // r5@10
  int v10; // r0@10
  const char *v11; // r0@11
  const char *v13; // r0@14
  int v14; // r7@14
  const char *v15; // r0@19
  int v16; // r5@21
  const char *v17; // r4@22
  int v18; // r6@24
  signed int v19; // r11@34
  int *v20; // r6@36
  int v21; // r5@36
  const char *v22; // r0@42
  int v23; // r4@45
  const char *v24; // r1@47
  int v25; // r0@51
  int s[12]; // [sp+8h] [bp-3F18h]@16
  int v27[12]; // [sp+10h] [bp-3F10h]@16
  int v28[12]; // [sp+30h] [bp-3EF0h]@16
  char base; // [sp+38h] [bp-3EE8h]@18
  int v30; // [sp+3538h] [bp-9E8h]@3
  int v31; // [sp+3708h] [bp-818h]@6
  unsigned __int8 v32; // [sp+370Ch] [bp-814h]@22
  int v33; // [sp+388Ch] [bp-694h]@7
  int v34; // [sp+3AB0h] [bp-470h]@51
  int v35; // [sp+3CB0h] [bp-270h]@7
  int v36; // [sp+3D84h] [bp-19Ch]@25
  int v37; // [sp+3DB0h] [bp-170h]@27
  signed int v38; // [sp+3E44h] [bp-DCh]@51
  signed int v39; // [sp+3E48h] [bp-D8h]@51
  signed int v40; // [sp+3E4Ch] [bp-D4h]@51
  signed int v41; // [sp+3E50h] [bp-D0h]@51
  int v42; // [sp+3E54h] [bp-CCh]@51
  signed int v43; // [sp+3E74h] [bp-ACh]@51
  int v44; // [sp+3E78h] [bp-A8h]@3
  int v45; // [sp+3E98h] [bp-88h]@23
  int v46; // [sp+3EB8h] [bp-68h]@3
  int v47; // [sp+3ED8h] [bp-48h]@3

  v1 = a1;
  v2 = get_pvalue(a1, "ifname");
  if ( !v2 )
  {
    v3 = "No ifname Error";
    return printf(v3, v2);
  }
  sf_strncpy(&v47);
  sf_strncpy(&v46);
  v4 = strcmp((const char *)&v47, "eth1");
  read_wireless_conf(&v30, &v47);
  printf("<meta name=\"format-detection\" content=\"telephone=no\">");
  printf("<BODY style=\"padding:0px 0px; margin:0px 0px;\">");
  sub_15988("wirelessconf", "multibridge");
  snprintf((char *)&v44, 0x20u, "apscan.%s", &v47);
  v6 = check_process(&v44);
  if ( !v6 && (!v5 || strcmp((const char *)get_pvalue(v1, "act"), "scan")) )
  {
    printf("<table border-collapse=collapse; width=100%%; cellspacing=0; cellpadding=0>");
    v13 = (const char *)get_pvalue(v1, "apply_bss");
    v14 = (int)v13;
    if ( v13 )
      v14 = atoi(v13);
    memset(s, 0, 0x3530u);
    sf_strncpy(v27);
    sf_strncpy(v28);
    wireless_api_get_ap_list_from_tempfile(s);
    if ( v14 )
      wireless_api_enable_bss(&v46, 1);
    qsort(&base, s[0], 0xD4u, (__compar_fn_t)sub_2DD44);
    if ( s[0] <= 4 )
      v15 = "<COL WIDTH=4.5%%><COL WIDTH=37%%><COL WIDTH=19%%><COL WIDTH=23.5%%><COL WIDTH=8%%><COL WIDTH=5%%><COL WIDTH=3%%>";
    else
      v15 = "<COL WIDTH=4.5%%><COL WIDTH=40%%><COL WIDTH=19%%><COL WIDTH=23.5%%><COL WIDTH=8%%><COL WIDTH=5%%><COL WIDTH=0%%>";
    printf(v15);
    v16 = v31;
    if ( v31 )
    {
      v17 = (const char *)v32;
      if ( v32 )
      {
        sub_2E178(s, (int)&v30, (char *)&v45);
        sub_2DC10((int)&v30, (int)&v45);
LABEL_32:
        v17 = 0;
LABEL_34:
        v19 = 1;
        goto LABEL_36;
      }
    }
    else
    {
      v18 = v4 == 0;
      v17 = (const char *)is_wds_enable(v18);
      if ( !v17 )
      {
        sub_2E168();
        sub_2CDF4();
        goto LABEL_34;
      }
      v17 = (const char *)wds_get_config(v18, v16, &v36);
      if ( v17 )
      {
        while ( v16 < s[0] )
        {
          if ( !maccmp(&s[53 * v16 + 44], &v37) )
          {
            v17 = (const char *)&s[53 * v16 + 12];
            sub_2D8D8(0, (int)&s[53 * v16 + 12], 1);
            sub_2DC9C((int)&s[53 * v16 + 12], 1);
            goto LABEL_34;
          }
          ++v16;
        }
        sub_2E6F4((int)&v36);
        sub_2D85C((int)&v36);
        goto LABEL_32;
      }
    }
    v19 = (signed int)v17;
LABEL_36:
    v20 = s;
    v21 = 0;
    while ( v21 < s[0] )
    {
      if ( *((_BYTE *)v20 + 48)
        && (!v31 || strcmp((const char *)&s[53 * v21 + 12], (const char *)&v32))
        && (!v17 || strcmp((const char *)&s[53 * v21 + 12], v17)) )
      {
        v22 = (const char *)v19++;
        sub_2D8D8(v22, (int)&s[53 * v21 + 12], 0);
        sub_2DC9C((int)&s[53 * v21 + 12], 0);
      }
      ++v21;
      v20 += 53;
    }
    v23 = 0;
    while ( v23 < 14 - v19 )
    {
      if ( ((_BYTE)v23 + (_BYTE)v19) & 1 )
        v24 = "f7f7f7";
      else
        v24 = "ffffff";
      ++v23;
      printf("<TR STYLE=\"height: 24px; background-color:#%s\">", v24);
      printf("<TD colspan=%d></TD></TR>", 7);
    }
    printf("</TABLE>");
    printf("</form>");
    memset(&v38, 0, 0x34u);
    v38 = 65;
    v39 = 144;
    v40 = 500;
    v41 = 24;
    strcpy((char *)&v42, '#');
    v43 = 100;
    snprintf((char *)&v34, 0x200u, "<span class=\"gray_text\">%s</span>", sub_15A94(35));
    sub_14928("apscan_guide_mask", &v34, &v38);
    puts("<script>");
    printf("ClickAP();");
    puts("</script>");
    printf(
      "<iframe name=\"iframe_update_apinfostatus\" src=\"timepro.cgi?tmenu=iframe&smenu=apinfostatus&ifname=%s\" framebor"
      "der=no style=\"display: none; \" ></iframe>",
      &v47);
    printf("<script>");
    printf("EnableObj2(parent.document.getElementById('bridge_frequency'));");
    printf("EnableObj2(parent.document.getElementsByName('run')[0]);");
    printf("EnableObj2(parent.document.getElementsByName('apply_bt')[0]);");
    printf("EnableObj2(parent.document.getElementsByName('apply_bt')[1]);");
    puts("enableAPScan(parent.document);");
    v3 = "</script>";
    return printf(v3, v2);
  }
  v7 = printf("<table cellspacing=0 cellpadding=0 style=\"border-collapse: collapse; width: 100%%;\">");
  v8 = v31;
  if ( v31 )
  {
    v7 = wireless_api_get_mbridge_status(&v33, &v35);
    if ( v7 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v7 = wireless_api_enable_bss(&v46, 0);
    }
  }
  printf("<tr height=312><td width=230 align=right valign=center style=\"padding-top:11px; \"><img src=\"/%s/apply_ani.gif\"><"
    "/td><td style=\"padding:3 0 0 2; padding-top: 11px;\" align=left>%s</td></tr>",sub_14BF4(v7), sub_15A94(1340));
  printf("</table>");
  puts("<script>");
  puts("DisableAllObj2(parent.document.mbridge_fm);");
  printf("UnMaskIt(parent.document,'apply_mask');");
  puts("</script>");
  if ( v6 )
    v11 = "<iframe name=\"iframe_update_apinfostatus\" src=\"timepro.cgi?tmenu=iframe&smenu=apinfostatus&act=wait&ifname="
          "%s&apply_bss=%d\" frameborder=no style=\"display: none; \" ></iframe>";
  else
    v11 = "<iframe name=\"iframe_update_apinfostatus\" src=\"timepro.cgi?tmenu=iframe&smenu=apinfostatus&act=scan&ifname="
          "%s&apply_bss=%d\" frameborder=no style=\"display: none; \" ></iframe>";
  printf(v11, &v47, v8);
}

int __fastcall sub_2F42C(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r0@1

  sub_2CE38(a1);
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  v2 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    sub_14BF4(v2));
  printf("</SPAN></td>");
  printf(
    "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:"
    "middle; display:block; text-align:center;\">%s\n",
    sub_15A94(31));
  printf("</SPAN></td>");
  printf("</tr>");
}

void sub_2F4E8(int a1, int a2, int a3, int a4, int a5)
{
  puts("<form method=get action=timepro.cgi name=wizard>");
  puts("<input type=hidden name=tmenu value=wirelesswizard>");
  printf("<input type=hidden name=step value=%d>\n", a1);
  if ( v6 )
    printf("<input type=hidden name=ifname value=%s>\n", a2);
  if ( v7 )
    printf("<input type=hidden name=country value=%s>\n", a3);
  if ( v8 )
    printf("<input type=hidden name=ssid value=\"%s\">\n", a4);
  if ( a5 )
    printf("<input type=hidden name=channel value=%s>\n", a1);
  puts("<input type=hidden name=commit value=>");
  puts("<input type=hidden name=nextstep value=>");
}

void sub_2F5A4(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  const char *v4; // r0@3
  bool v5; // zf@3
  const char *v6; // r0@11
  int v7; // r0@11
  const char *v8; // r0@11
  int v9; // r7@13
  void *v10; // r5@14
  signed int v11; // r6@18
  signed int v12; // r0@22
  const char *v13; // r0@23
  int v14; // r0@23
  const char *v15; // r0@24
  int v16; // r4@26
  int v17; // r0@26
  int v18; // r0@27
  const char *v19; // r0@29
  char v21; // [sp+8h] [bp-E8h]@1
  char v22; // [sp+88h] [bp-68h]@1
  char s1; // [sp+A8h] [bp-48h]@1
  char v24; // [sp+C8h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  get_value(a1, "country", &v24, 16);
  strcpy(&s1, "");
  get_value(v3, "stage", &s1, 32);
  strcpy(&v21, "");
  get_value(v3, "ssid", &v21, 128);
  if ( !get_value(v3, "ifname", &v22, 32) )
    strcpy(&v22, "eth2");
  v4 = (const char *)strcmp(&s1, "init");
  v5 = v4 == 0;
  if ( !v4 )
    v4 = "<body class=check_ssid_body>";
  if ( !v5 )
    v4 = "<body class=gray_body>";
  puts(v4);
  puts("<form method=get action=timepro.cgi name=check_fm>");
  puts("<input type=hidden name=tmenu value=iframe>");
  printf("<input type=hidden name=smenu value=%s>\n");
  printf("<input type=hidden name=country value=%s>\n", &v24);
  puts("<input type=hidden name=ssid value=>");
  printf("<input type=hidden name=ifname value=%s>\n", &v22);
  if ( !strcmp(&s1, "init") )
  {
    puts("<input type=hidden name=stage value=start>");
  }
  else if ( !strcmp(&s1, "start") )
  {
    if ( v2 )
    {
      printf("<script>");
      printf("DisableObj(parent.document.wizard.ovtest_bt);");
      printf("DisableObj(parent.document.wizard.ssid);");
      printf("DisableObj(parent.document.wizard.prev_bt);");
      printf("DisableObj(parent.document.wizard.next_bt);");
      printf("</script>");
      v7 = printf((const char *)sub_15A94(1336));
      br(v7);
      v8 = (const char *)sub_15A94(1337);
      printf(v8);
    }
    ifup(&v22);
    wireless_api_start_ap_scan(&v22);
    printf("<meta http-equiv=refresh content=\"5; URL=timepro.cgi?tmenu=iframe&smenu=%s&stage=end&country=%s&ssid=%s&ifname=%s\">");
  }
  else
  {
    v9 = strcmp(&s1, "end");
    if ( !v9 )
    {
      puts("<input type=hidden name=stage value=start>");
      v10 = malloc(0x3530u);
      memset(v10, 0, 0x3530u);
      sf_strncpy((char *)v10 + 8);
      sf_strncpy((char *)v10 + 40);
      wireless_api_get_ap_list(v10);
      wireless_api_stop_ap_scan(&v22);
      while ( 1 )
      {
        if ( v9 >= *(_DWORD *)v10 )
        {
          v11 = 0;
          goto LABEL_20;
        }
        if ( !strcmp(&v21, (const char *)v10 + 212 * v9 + 48) )
          break;
        ++v9;
      }
      v11 = 1;
LABEL_20:
      if ( v2 )
      {
        if ( v11 )
        {
          br(printf((const char *)sub_15A94(1338)));
          v12 = 1339;
        }
        else
        {
          v12 = 1334;
        }
        printf((const char *)sub_15A94(v12));
        printf("<script>");
        printf("EnableObj(parent.document.wizard.ovtest_bt);");
        printf("EnableObj(parent.document.wizard.ssid);");
        printf("EnableObj(parent.document.wizard.prev_bt);");
        printf("EnableObj(parent.document.wizard.next_bt);");
      }
      else
      {
        printf("<script>");
        if ( v11 )
        {
          printf("alert('%s\\n%s');\n", sub_15A94(1338), sub_15A94(1339));
        }
        else
        {
          printf("alert('%s');", sub_15A94(1335));
        }
        puts("parent.document.getElementById('ssidcheck_msg').style.display = \"none\";");
        puts("parent.document.getElementById('maintable').style.display = \"block\";");
        if ( v11 )
        {
          puts("parent.document.basicsetup_fm.ssid.focus();");
          v19 = "parent.document.basicsetup_fm.ssid.select();";
        }
        else
        {
          v19 = "parent.document.basicsetup_fm.apply_bt.focus();";
        }
        puts(v19);
      }
      printf("</script>");
      free(v10);
    }
  }
  printf("</form>");
  printf("</body>");
}

char *sub_2F9B0(int a1, char *a2, int a3, int a4, char *a5)
{
  char *v5; // r4@1
  int v6; // r7@1
  int v7; // r6@1
  int v8; // r5@1
  char *result; // r0@7
  int v10; // [sp+0h] [bp-598h]@4

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = a1;
  if ( !get_value(a1, "ifname", a2, 32) )
    strcpy(v5, "eth2");
  if ( !get_value(v8, "country", v6, 16) )
  {
    memset(&v10, 0, 0x578u);
    read_wireless_conf(&v10, v5);
    sf_strncpy(v6);
  }
  if ( !get_value(v8, "ssid", v7, 128) )
  {
    memset(&v10, 0, 0x578u);
    read_wireless_conf(&v10, v5);
    sf_strncpy(v7);
  }
  result = (char *)get_value(v8, "channel", a5, 16);
  if ( !result )
    result = strcpy(a5, "11.9");
  return result;
}

int sub_2FAD0(const char *a1, const char *a2, int a3)
{
  const char *v3; // r4@1
  const char *v4; // r5@1
  int v5; // r6@1
  char *v6; // r7@1
  int v7; // r0@2
  int v8; // r5@4
  signed int v9; // r3@6
  int v10; // r0@9
  signed int v11; // r3@9
  int result; // r0@11

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = strchr(a2, 46);
  if ( v6 )
  {
    *v6 = 0;
    v8 = atoi(v4);
    *(_DWORD *)v5 = v8;
    if ( !strcmp(v3, "eth1") )
    {
      *(_DWORD *)(v5 + 4) = v8;
LABEL_6:
      v9 = 80;
      goto LABEL_9;
    }
    *(_DWORD *)(v5 + 4) = atoi(v6 + 1);
  }
  else
  {
    *(_DWORD *)(v5 + 4) = atoi(v4);
    *(_DWORD *)v5 = atoi(v4);
    if ( !strcmp(v3, "eth1") )
      goto LABEL_6;
  }
  v9 = 40;
LABEL_9:
  *(_DWORD *)(v5 + 16) = v9;
  v10 = strcmp(v3, "eth1");
  v11 = 5000;
  if ( v10 )
    v11 = 2412;
  result = 0;
  *(_DWORD *)(v5 + 8) = v11 + 5 * (*(_DWORD *)v5 - 1);
  return result;
}

int sub_2FBA4()
{
  int v0; // r0@1
  int v1; // r0@1
  const char *v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  const char *v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1

  puts("<form method=get action=timepro.cgi name=wizard>");
  puts("<input type=hidden name=tmenu value=wirelesswizard>");
  puts("<input type=hidden name=step>");
  printf("<input type=hidden name=ifname value=%s>\n", "eth2");
  v0 = sub_15A94(1353);
  v1 = sub_134A8(v0);
  str(v1);
  puts("<td height=190 class=wizardbody_td>");
  br(printf((const char *)sub_15A94(1348)));
  br(br(sub_15A94(1349)));
  printf("<span class=gray_text>");
  br(br((const char *)sub_15A94(1350)));
  printf("</span>");
  etr("</td>");
  str(print_blank_line(1, 2));
  printf("<td class=wizardbottom_td align=right>");
  printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WirelessWizardGotoPage(2);\">", sub_15A94(1470));
  etr("</td>");
  puts("</form>");
}

void sub_2FCC4(int a1)
{
  int v1; // r6@1
  int v2; // r0@1
  int v3; // r0@1
  const char *v4; // r0@1
  int v5; // r0@1
  const char *v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  char v15; // [sp+8h] [bp-D0h]@1
  char v16; // [sp+88h] [bp-50h]@1
  char v17; // [sp+A8h] [bp-30h]@1
  char v18; // [sp+B8h] [bp-20h]@1

  sub_2F9B0(a1, &v16, (int)&v18, (int)&v15, &v17);
  sub_2F4E8(2, (int)&v16, 0, 0, 0);
  str(sub_13414(sub_15A94(1356), sub_15A94(1357), &v16));
  puts("<td height=190 class=wizardbody_td>");
  br((const char *)sub_15A94(1354));
  br(br((const char *)sub_15A94(1355)));
  puts("<select name=country>");
  sub_1383C(br((const char *)sub_15A94(1355)));
  printf("</select><br><br>");
  etr("</td>");
  str(print_blank_line(1, 2));
  printf("<td class=wizardbottom_td align=right>");
  printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WirelessWizardGotoPage(0);\">", sub_15A94(1471));
  printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WirelessWizardGotoPage(3);\">", sub_15A94(1470));
  etr("</td>");
  puts("</form>");
}

int sub_2FDFC(int a1)
{
  int v1; // r0@1
  int v2; // r0@1
  const char *v3; // r0@1
  int v4; // r0@1
  const char *v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  const char *v8; // r0@1
  int v9; // r0@1
  const char *v10; // r0@1
  int v11; // r0@1
  const char *v12; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  const char *v15; // r0@1
  int v16; // r0@1
  int v17; // r0@1
  int v18; // r0@1
  int v19; // r0@1
  int v20; // r0@1
  int v21; // r0@1
  int v22; // r0@1
  int v23; // r5@1
  int v24; // r0@1
  int v25; // r0@1
  int v27; // [sp+8h] [bp+0h]@1
  char v28; // [sp+88h] [bp+80h]@1
  char v29; // [sp+A8h] [bp+A0h]@1
  char v30; // [sp+B8h] [bp+B0h]@1

  sub_2F9B0(a1, &v28, (int)&v30, (int)&v27, &v29);
  sub_2F4E8(3, (int)&v28, (int)&v30, 0, 0);
  puts("<input type=hidden name=dupcheck value=0>");
  str(sub_13414(sub_15A94(1367), 0, &v28));
  puts("<td height=190 class=wizardbody_td>");
  br((const char *)sub_15A94(1362));
  br((const char *)sub_15A94(1364));
  br((const char *)sub_15A94(1366));
  printf((const char *)sub_15A94(1365));
  print_nbsp(3);
  printf("<input type=text name=ssid size=24 maxlength=32 value=\"%s\">", &v27);
  v17 = printf("<input type=button name=ovtest_bt value=\"%s\" onclick=\"document.wizard.dupcheck.value=1; CheckSSIDOverlap();\">",
          sub_15A94(1344));
  br(v17);
  str("<table height=35 class=wizard_outline_table>");
  printf("<td>");
  printf("<iframe name=check_ssid src=\"timepro.cgi?tmenu=iframe&smenu=checkssid&stage=init&country=%s&ifname=%s\" width=400 h"
    "eight=35 frameborder=no scrolling=no>",
    &v30,
    &v28);
  printf("</iframe>");
  etr("</td>");
  printf("</table>");
  etr("</td>");
  str(print_blank_line(1, 2));
  printf("<td class=wizardbottom_td align=right>");
  printf("<input type=button class=navi_bt name=prev_bt value='%s' onclick=\"WirelessWizardGotoPage(2);\">", sub_15A94(1471));
  printf("<input type=button class=navi_bt name=next_bt value='%s' onclick=\"if(document.wizard.dupcheck.value==0) alert('%s')"
    "; else WirelessWizardGotoPage(4);\">", sub_15A94(1470), sub_15A94(146));
  etr("</td>");
  puts("</form>");
}

void sub_2FFF0(int a1)
{
  int v1; // r6@1
  int v2; // r0@1
  int v3; // r0@1
  const char *v4; // r0@1
  int v5; // r0@1
  const char *v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  char v15; // [sp+8h] [bp-A0h]@1
  char v16; // [sp+88h] [bp-20h]@1
  int v17; // [sp+A8h] [bp+0h]@1
  char v18; // [sp+B8h] [bp+10h]@1

  sub_2F9B0(a1, &v16, (int)&v18, (int)&v15, (char *)&v17);
  sub_2F4E8(4, (int)&v16, (int)&v18, (int)&v15, (int)&v17);
  str(sub_13414(sub_15A94(1380), sub_15A94(1381), &v16));
  puts("<td height=190 class=wizardbody_td>");
  br((const char *)sub_15A94(1368));
  printf("<table width=100%%>");
  printf("<span class=gray_text>");
  br((const char *)sub_15A94(1369));
  printf("</span>");
  printf("</td><td align=right>");
  printf(
    "<input type=button name=search_bt value=\"%s\" onclick=\"parent.iframe_scan.document.scan_fm.submit();\" disabled>",
    sub_15A94(1379));
  printf("</td></tr>");
  printf("</table>");
  printf("<table height=150 class=wizard_outline_table><tr><td>");
  printf(
    "<iframe name=iframe_scan src=\"timepro.cgi?tmenu=iframe&smenu=channelscan&wizard=1&stage=start&country=%s&ifname=%s&"
    "bw=%d\" width=520 height=150 frameborder=no scrolling=auto name=wizardscan >",
    &v18,
    &v16,
    40);
  printf("</iframe>");
  printf("</td></tr></table>");
  etr("</td>");
  str(print_blank_line(1, 2));
  printf("<td colspan=2 class=wizardbottom_td align=right>");
  printf("<input type=button class=navi_bt name=prev_bt value='%s' onclick=\"WirelessWizardGotoPage(3);\">", sub_15A94(1471));
  printf("<input type=button class=navi_bt name=next_bt value='%s' onclick=\"WirelessWizardGotoPage(5);\">", sub_15A94(1470));
  etr("</td>");
  puts("</form>");
}