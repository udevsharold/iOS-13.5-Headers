/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEVPNConnection, NEConfiguration, NSArray, NSString, NEVPNProtocol;

@interface NEVPNManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	BOOL _notificationSent;
	NEVPNConnection* _connection;
	NEConfiguration* _configuration;

}

@property (copy) NEConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                      //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign) BOOL notificationSent;                               //@synthesize notificationSent=_notificationSent - In the implementation block
@property (copy) NSArray * onDemandRules; 
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEVPNProtocol * protocol; 
@property (retain) NEVPNProtocol * protocolConfiguration; 
@property (readonly) NEVPNConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
+(id)loadedManagers;
+(id)mapError:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(NEVPNProtocol *)protocol;
-(NEVPNConnection *)connection;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(BOOL)hasLoaded;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithGrade:(long long)arg1 connection:(id)arg2 tunnelType:(long long)arg3 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)onDemandRules;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(BOOL)isOnDemandEnabled;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setNotificationSent:(BOOL)arg1 ;
-(BOOL)notificationSent;
@end
