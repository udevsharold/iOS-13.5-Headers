/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:56:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_interface.h>

@class NSString;

@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {

	unsigned index;
	nw_interface_details details;
	unsigned delegate_index;
	unsigned generation;
	int type;
	int subtype;
	char name[25];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end
