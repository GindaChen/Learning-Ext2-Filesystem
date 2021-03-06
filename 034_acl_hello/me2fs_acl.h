/*********************************************************************************
	File			: me2fs_acl.h
	Description		: Definition for Posix ACL

*********************************************************************************/
#ifndef	__ME2FS_POSIX_ACL_H__
#define	__ME2FS_POSIX_ACL_H__


/*
==================================================================================

	Prototype Statement

==================================================================================
*/

/*
==================================================================================

	DEFINES

==================================================================================
*/

/*
==================================================================================

	Management

==================================================================================
*/

/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	< Open Functions >

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
/*
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	Function	:me2fsGetAcl
	Input		:struct inode *inode
				 < vfs inode >
				 int type
				 < type of acl >
	Output		:void
	Return		:struct posix_acl*
				 < return posix acl >

	Description	:get posix acl
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
*/
struct posix_acl*
me2fsGetAcl( struct inode *inode, int type );

/*
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	Function	:me2fsSetAcl
	Input		:struct inode *inode
				 < vfs inode >
				 struct posix_acl *acl
				 < posix acl >
				 int type
				 < acl type >
	Output		:void
	Return		:int
				 < result >

	Description	:set posix acl
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
*/
int me2fsSetAcl( struct inode *inode, struct posix_acl *acl, int typte );


#endif	// __ME2FS_POSIX_ACL_H__
