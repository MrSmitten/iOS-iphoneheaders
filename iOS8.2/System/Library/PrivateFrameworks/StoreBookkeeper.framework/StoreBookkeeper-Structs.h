/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

