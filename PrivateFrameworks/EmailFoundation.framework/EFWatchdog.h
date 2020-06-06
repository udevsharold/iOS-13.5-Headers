/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/SBSApplicationUserQuitMonitorDelegate.h>

@class SBSApplicationUserQuitMonitor, NSString;

@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate> {

	SBSApplicationUserQuitMonitor* _monitor;
	NSString* _monitoredBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * monitoredBundleIdentifier;              //@synthesize monitoredBundleIdentifier=_monitoredBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)invalidate;
-(void)start;
-(void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2 ;
-(NSString *)monitoredBundleIdentifier;
-(id)initWithMonitoredBundleIdentifier:(id)arg1 ;
@end

