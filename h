[33mcommit d0c5c6ef4ea59a6959cd32ce1e949168a6426d74[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: Alan <alan.esquenazi@alunoeleva.com.br>
Date:   Tue Sep 18 14:32:56 2018 -0300

    adds translation to portuguese

[33mcommit acff28c45107bdd32e42826a07e3d4c9e072d6fe[m
Author: Alan <alan.esquenazi@alunoeleva.com.br>
Date:   Tue Sep 11 14:05:12 2018 -0300

    Portuguese translation

[33mcommit 4a8bc0926ff7f279e89627d2f46fc165a65e70ae[m[33m ([m[1;33mtag: v0.5.2[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Aug 24 19:01:49 2013 +0200

    Release 0.5.2.

[33mcommit 50602b536b1cfc355e610f4420d217168886ced3[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Aug 24 18:49:38 2013 +0200

    Encodes vcard to fit into XML text value.
    
    VCards may also contain characters that have to be encoded to not
    invalidate the xml file.

[33mcommit ea15ecf6b9a42e2878658f863ccdd2315f3f8ae0[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Wed Jan 30 11:29:34 2013 +0100

    Completes documentation for BackupActivity class.

[33mcommit 10fb73d7a522dbf47250f3d403fbdac2c74e9474[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jan 27 00:45:28 2013 +0100

    Adjusts whitespaces also in the xml files.

[33mcommit 92c23b967944e949f9291d3a66456e0d94a3f9f0[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Jan 22 00:44:04 2013 +0100

    Adds some very basic documentation to the classes BackupActivity,
    BackupFilesListAdapter and Strings.

[33mcommit 61e3b22c6e9f5c136fc408abd16aae3138f9caad[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jan 20 22:41:34 2013 +0100

    Adds some very basic documentation.

[33mcommit ffb016aaec32df831b4bc296d90e05cbdf7fa26f[m[33m ([m[1;33mtag: v0.5.1[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Dec 21 21:33:24 2012 +0100

    Release 0.5.1.

[33mcommit 2a1e254ee4703994a8eb678ef8ca0db222629ff7[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Dec 21 21:16:31 2012 +0100

    Further whitespace unifications.

[33mcommit 0f222632bf960be4dd0197f9167cf91fa7aac090[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Dec 9 22:31:11 2012 +0100

    Whitespace adjustments.

[33mcommit 4607727c787bc60dddca78ff77d789acbe4f70cc[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Dec 9 22:27:33 2012 +0100

    Fixes selection of available fields wrt. mandatory fields.
    
    Makes "service_center" an optional field during the message import.

[33mcommit c722a5e77ea9569ec979bfd2e932f5ca64d2bb5d[m[33m ([m[1;33mtag: v0.5[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Dec 1 13:26:54 2012 +0100

    Updates version code.

[33mcommit 31dde57bd3f96ebec77685f96d174e2b7173cbce[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Dec 1 12:38:21 2012 +0100

    Release 0.5.

[33mcommit b8ead20476bb59fb3e724530c07eeccac8e6791c[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Nov 18 23:05:26 2012 +0100

    Adds icons in higher resolution and the according makefile.
    
    Adjusts .gitignore to notice the not ignore the new icons.

[33mcommit 4faee31f8eb37ab95e9eed7139e680159e2d00cd[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Sep 25 23:37:02 2012 +0200

    Updates French and Turkish translation by <unnamed>

[33mcommit 32eb2dd7254acfacded7419dff0058199f67f19c[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Sep 25 23:12:12 2012 +0200

    Adds missing German translation.

[33mcommit 9b0d48f71367c524cc5a0c0d21bda94982d7e740[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Sep 25 23:07:20 2012 +0200

    Adds option to disable incomplete-data warnings.

[33mcommit f95712edc823f65b068c7cf086b27e07b9f278ba[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Sep 24 23:50:28 2012 +0200

    Adds warning about possible incomplete data.

[33mcommit a38bb547202382f95d4cbe954dfd879ae8dcc9a6[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Sep 24 21:38:56 2012 +0200

    Shows correct hint if all entries are skipped.

[33mcommit 83be103bccf918856b472f168c1dc748ad270d6b[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Sep 22 22:10:50 2012 +0200

    Adds contacts-importer that simply generates a vcf file that is imported by the
    standard contacts application.

[33mcommit d10eb7d9c6f624e7513f3ac463912e106ffd01aa[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Wed Sep 19 22:26:30 2012 +0200

    Adds option to perform a contact backup (if api level > 4).

[33mcommit a36c122ce28109972051a4c6c24a8694e6182996[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Wed Sep 19 22:21:34 2012 +0200

    Utilizes reflection api to load and distribute the exporters / importers.

[33mcommit 95ae5e4354e7d6f6f95188420994a408f58fdccc[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Apr 3 18:02:17 2012 +0200

    Corrects .gitignore and adds project.properties.

[33mcommit 6c966d99bf9f8157c68e6a4727e64bd3695d0444[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Apr 3 10:50:29 2012 +0200

    Improves actionBar support.

[33mcommit 909a90be3cf32b6ad9f1dc8a1daff7c26c9a79ce[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Apr 2 23:07:03 2012 +0200

    Improves ICS compatibility.

[33mcommit 1065ec645741ee659bdc6a9bd49c349f5f86045a[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Mar 29 13:55:28 2012 +0200

    Fixes overwriting of column names.

[33mcommit db41683220e17effb30e93d23ff19b5d959fa22d[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Mar 29 13:47:04 2012 +0200

    Forces utf-8 encoding.

[33mcommit 53a2d780309a49d054f9c2b9b1d7471a649665a5[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Mar 29 13:20:45 2012 +0200

    Fixes Android 1.6 compatibility.
    
    Adds additional export fields to SMS backup.

[33mcommit a6c3908437a6715ba3e5372394cac56156339200[m[33m ([m[1;33mtag: v0.4.5[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 24 13:37:07 2012 +0100

    0.4.5 release.

[33mcommit 47c24f29efb6aa5f5c7a2e54d92fb7863ed1cde3[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 24 03:58:41 2012 +0100

    Adds gitignore file.
    
    Adds lint.xml for better Android ICS compatibility.

[33mcommit e8274278ef6145f6247addda49225238c8e165cb[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 24 03:46:19 2012 +0100

    Changes escape character implementation to the standard android
    internal one that should be faster.

[33mcommit 1f67b4792677a91f7c88e9a72aa65e721b995913[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 24 03:12:26 2012 +0100

    Adds escape to special characters for all values.

[33mcommit 472cbc772be37b8ebc4abe9da99545a98f4c3517[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 24 02:10:46 2012 +0100

    Fixes issue reported by Maciej Sitarz from pullrequest
    https://github.com/handschuh/Slight-backup/pull/1
    that caused invalid xml files for non-excaped characters.
    (different approach)

[33mcommit 056c2462dd0618c48635808f52883ab99b718aed[m[33m ([m[1;33mtag: v0.4.4[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Mar 17 01:59:44 2012 +0100

    Release 0.4.4.
    
    Code cleanup.
    
    Adds some missing translation strings.
    
    Adds distinction into ICS and non-ICS devices to properly ignore the voice
    mail call logs.
    
    Improves day-deletion-question to show only the date instead of date and
    time.

[33mcommit fab3a77cbeb91de958f218385ba684599fdabf2f[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Mar 16 10:52:01 2012 +0100

    Updates license files.

[33mcommit 524d33b41f5c2e4d7513a38666b261b60a9ea44b[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Mar 16 10:42:15 2012 +0100

    Removes application list exporter.
    
    Adds check for import task if it runs already.
    
    Adds exclusion to type 4 call log entries (voicemails).
    
    Minor code cleanup.

[33mcommit ef015b3e8bf8cec804d448ba4406d1aab9447d34[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Nov 24 23:43:58 2011 +0100

    Adds application name to copyright hint. Adds option to export list of installed non-system applications.

[33mcommit 44d0d7e747bd8c53aa2a397222b4ac1b5ec54cea[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Nov 24 22:48:56 2011 +0100

    Names SMS exporter properly and changes the string accordingly. Removes name redundance.

[33mcommit 093cf46438b95cc379139792f7093739dcdfc2a7[m[33m ([m[1;33mtag: v0.4.3[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Sep 27 00:09:35 2011 +0200

    Version bump.

[33mcommit 1599b596138f10f61bcf74c179fd43f4e7b79db1[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Sep 24 19:30:49 2011 +0200

    Adds support for empty (null) messages.

[33mcommit f9c04ccb93e28a0f452a148cac1881992ae15835[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Aug 26 14:46:06 2011 +0200

    Sorts message exports.

[33mcommit 188d487405aab4e9c315aea820d5a403af3b006d[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Aug 25 10:19:39 2011 +0200

    Adds sorting to message exporter.

[33mcommit 843c7eecef6ac3602728facb3c281aa1ea6809b6[m[33m ([m[1;33mtag: v0.4.2[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Aug 25 00:07:39 2011 +0200

    Adds more flexibility on the everything exporter.

[33mcommit f2a861c2967c367194d18babbee76ade31684b71[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Aug 5 00:24:55 2011 +0200

    Adds missing permission.

[33mcommit afba36a116d3bc54172f73c6aeb8e7d2077bf189[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Aug 5 00:21:31 2011 +0200

    Re-enables everything-exporter.

[33mcommit c5b564771b0812e9618d3cb7048b3b509bf24690[m[33m ([m[1;33mtag: v0.4[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Aug 5 00:03:02 2011 +0200

    Adds some translations strings. Release version.

[33mcommit 6272bab5c0e0f899d929e859ea3cabd10cb41902[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Aug 4 14:59:45 2011 +0200

    Adds option to change storage location. Adds option to limit number of backups of one type.

[33mcommit 486c367c1856fd4a0db4e077d46fb5ef549a39f3[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jul 31 22:33:34 2011 +0200

    Decreases memory usage. Adds separate dialog for single backup.

[33mcommit d23dbbf3f329e807cf7166cb51edc2d4313a7e40[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Jul 29 14:09:12 2011 +0200

    Adds settings parser recognition.

[33mcommit 950c3af9d472e2cacfb2ebb0aa1144fd5d2f86af[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Jul 29 14:02:27 2011 +0200

    Increases independece of available exporters. Adds importer vor settings.

[33mcommit 603a5096b7c273805d891fe6ab69ea2f393a5f38[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Jul 28 18:24:34 2011 +0200

    Adds settings exporter. Adds option to delete a whole days backups.

[33mcommit 6e47e45c237677d68e14e54c0f9f7781f3974b81[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Tue Jul 26 23:41:22 2011 +0200

    Corrects Japanese language location.

[33mcommit 8cfc15e5670c1fe38214d388bd45313521500e26[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jul 25 23:52:51 2011 +0200

    Adds application name to license file.

[33mcommit 6adc13b02a3d993e99ca9df1a4e3a7b883960353[m[33m ([m[1;33mtag: v0.3[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jul 25 23:32:44 2011 +0200

    Updates manifest.

[33mcommit 95db0e483dc32da2252bb811f0755fa5dc9f150e[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jul 25 23:07:29 2011 +0200

    Adds Japanese translation.

[33mcommit c39c335e1fc08ee7a44a52cc3a551df999ad1dd1[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Jul 23 23:07:12 2011 +0200

    Adds hint for existing playlists.

[33mcommit 0a4151f7301cd760ed7db09494cee63cb3d4a16a[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Jul 23 01:54:59 2011 +0200

    Changes menu item order.

[33mcommit 56bbef316dd8f68b0b3365dc5afce75d29bdd5db[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sat Jul 23 01:48:26 2011 +0200

    Updates French and Turkish translation. Adds skip for existing playlists to avoid invalid merges.

[33mcommit 0f4781c50d6b6daceb481e56887c4976c3002729[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Fri Jul 22 15:49:12 2011 +0200

    Adds support for playlist import and changes the export format.

[33mcommit b88f946cd19073e201b932594da05873ff1e8177[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Jul 21 23:46:49 2011 +0200

    Adds export for playlists. Increases targer level to support ldpi screens.

[33mcommit 0a08dbb1bb1572e1440c6df4de34ee8c6eb96891[m[33m ([m[1;33mtag: v0.2.1[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Jul 14 18:02:16 2011 +0200

    Fixes menu-entry.

[33mcommit 94715551ab863b20df3de51a4a8ec1657fa98bfa[m[33m ([m[1;33mtag: v0.2[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Thu Jul 14 12:55:20 2011 +0200

    Adds option to export all elements at once. Adds French and Turkish translation. Adds plural string to items.

[33mcommit ee7944b0384b7b5fbfef64e76d87e579e9f36b70[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Wed Jun 22 00:55:49 2011 +0200

    Adds empty drawable ldpi folder to support more devices.

[33mcommit eb8521f440f64c2182c37bc37006e059c809606a[m[33m ([m[1;33mtag: v0.1.4[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jun 20 23:34:40 2011 +0200

    Removes alarm backup due to lack of stable api.

[33mcommit 8fa1889ac545b2f7eab33b2718fa13b92229dc40[m[33m ([m[1;33mtag: v0.1.3[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jun 20 23:00:21 2011 +0200

    Fixes missing directory check.

[33mcommit cc0c5ceecf0cd6e8a11f85e1408ad089c18bcbec[m[33m ([m[1;33mtag: v0.1.2[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jun 20 22:53:03 2011 +0200

    Fixes nullpointer.

[33mcommit 1d4f0c66ba7744b88d65ad8992ce581463b0f65a[m[33m ([m[1;33mtag: v0.1.1[m[33m)[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Mon Jun 20 22:34:11 2011 +0200

    Adds alarm clock backup. Fixes date issue on file deletion. Adds error message on wrong database structure.

[33mcommit 93d40aa800d4be6a013b17a813fa37ea70dd0d3c[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jun 19 21:38:01 2011 +0200

    Adds sorting of backups. Adds translation for backup types in overview.

[33mcommit 8d905d1726af2dd1e06bfba6bcb6724e81d53458[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jun 19 20:55:16 2011 +0200

    Changes import and export dialogs to standard progress-dialogs and uses async-tasks.

[33mcommit 5266e44d7cd2b586e4ef255eac846c7360236530[m
Author: Stefan Handschuh <handschuh.stefan@googlemail.com>
Date:   Sun Jun 19 03:07:50 2011 +0200

    Prevents hint for successful import if the import has been canceled.
