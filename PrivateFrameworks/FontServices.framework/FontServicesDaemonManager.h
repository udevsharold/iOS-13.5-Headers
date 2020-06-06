/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)requestFonts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)checkinForFontPicker:(/*^block*/id)arg1 ;
-(void)checkin:(/*^block*/id)arg1 ;
-(id)requestFileAccess:(id)arg1 ;
-(void)fontChanged:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestFonts:(id)arg1 forClient:(id)arg2 ;
-(void)updatingUserFonts:(/*^block*/id)arg1 ;
-(void)resumeAndShowAlertForSuspendedFontProviders;
@end

