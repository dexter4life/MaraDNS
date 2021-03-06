#define L_LOG "Log: "
#define L_FATAL "Fatal error: "
#define L_MLC "Could not create mararc_loc string"
#define L_MLL "Coule not set locale for mararc_loc string"
#define L_EC "Could not create errors string"
#define L_EL "Coule not set locale for errors string"
#define L_KSC "Could not create kvar_str string"
#define L_KSL "Could not set locale for kvar_str string"
#define L_VC "Could not create verbstr string"
#define L_VL "Could not set locale for verbstr string"
#define L_MC "Could not create maxpstr string"
#define L_ML "Could not set locale for maxpstr string"
#define L_CC "Could not create chrootn string"
#define L_CL "Could not set locale for chrootn string"
#define L_KQC "Could not create kvar_query string"
#define L_KQL "Could not set locale for kvar_query string"
#define L_BAC "Could not create bins_address string"
#define L_BAL "Could not set locale for bind_address string"
#define L_IC "Could not create incoming string"
#define L_IL "Could not set locale for incoming string"
#define L_UC "Could not create uncomp string"
#define L_UL "Could not set locale for uncomp string"
#define L_MW "Error locating mararc file"
#define L_GET_MARARC "Could not get mararc from command line"
#define L_USAGE "Usage: zoneserver [-f mararc_location]"
#define L_PARSE_MARARC "Error parsing contents of mararc file"
#define L_PARSE_MARARC_LINE "Error parsing contents of mararc file on line "
#define L_ERROR_CODE "Error code: "
#define LF "\n"
#define L_MAKE_KQ "Could not create kvar_query"
#define L_MAXPROCS "Problem getting maxprocs value.\nmaxprocs must be set before starting the MaraDNS server"
#define L_MAXPROCS_NUM "Problem converting maxprocs to a number\nThis must be a non-zero number"
#define L_SETMAX "Unable to set maximum number of processes"
#define L_CHROOT "Problem getting chroot kvar.\nYou must have chroot_dir set if you start this as root"
#define L_CHROOT_NT "Problem making chroot nt string.\nMake sure the chroot directory is 200 chars or less"
#define L_NO_CHROOT "Problem changing to chroot dir.\nMake sure chroot_dir points to a valid directory"
#define L_CHROOT_ERROR "Problem changing the root directory."
#define L_CHROOT_SUCCESS "Root directory changed"
#define L_BIND_GET "Problem getting chroot kvar.\nYou must have bind_address set to the IP zoneserver will listen on"
#define L_BIND "Problem binding to port 53.\nMost likely, another process is already listening on port 53"
#define L_SOCKET_SUCCESS "Socket opened on TCP port 53"
#define L_NO_UID "Problem getting maradns_uid kvar.\nYou must have maradns_uid set if you start this as root"
#define L_UID_INVALID "maradns_uid is less than 10 or not a number.\nThis uid must have a value of 10 or more"
#define L_NODROP "Could not drop root uid"
#define L_STILL_ROOT "We seem to still be root"
#define L_DROP_SUCCESS "Root privileges dropped"
#define L_BE_ROOT "Problem binding to port 53.\nYou should run this as root"
#define L_NO_ACL "Could not read zone_transfer_acl data"
#define L_ACL_INETD "zone_transfer_acl must not be set when running in inetd mode"
#define L_ACL_LIST "Could not make ip ACL list\nPlease add tcp_convert_acl with tcp_convert_server and/or zone_transfer_acl\nto mararc file.  See mararc man page for details"
#define L_WAITING "Awaiting data on port 53"
#define L_GOT "Message received, processing"
#define L_NO_ZONE_HERE "Zone we do not have asked for, disconnecting"
#define L_THISIS "This is MaraDNS' zoneserver version"
#define L_RTFM "For usage information, 'man zoneserver'"
