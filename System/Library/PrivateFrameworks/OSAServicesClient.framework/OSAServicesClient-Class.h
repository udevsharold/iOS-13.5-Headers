/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OSAServicesClient.framework/OSAServicesClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTAAgentServices;
#import <OSAServicesClient/OSAServicesClient-Structs.h>
@class NSXPCConnection;

@interface OSAServicesClient : NSObject {

	NSXPCConnection* _connection;
	id<OTAAgentServices> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(id)crashreporterKey;
-(id)awdKey;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)queryKey:(CFStringRef)arg1 ;
@end

