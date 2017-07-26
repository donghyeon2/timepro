int __fastcall sub_20948(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@1
  int v4; // r3@1
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r0@4
  int v8; // r0@4
  int v9; // r0@4
  int v10; // r0@4
  int v11; // r0@4
  int v12; // r0@4
  int v13; // r0@4
  int v14; // r0@4
  int v15; // r0@4
  int v16; // r0@4
  int v17; // r0@4
  int v18; // r0@4
  int v19; // r0@4
  int v20; // r4@4
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
  str(v2);
  printf("<td width=100%% height=%d colspan=2 style='border-bottom: 1px solid #CCC;'>", 260);
  v3 = (char *)&v23 + snprintf((char *)&v23, 0x80u, (const char *)"timepro.cgi?tmenu=iframe&smenu=");
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
  return printf("</form>");
}