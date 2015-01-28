#
# Regular cron jobs for the wmstickynotes package
#
0 4	* * *	root	[ -x /usr/bin/wmstickynotes_maintenance ] && /usr/bin/wmstickynotes_maintenance
