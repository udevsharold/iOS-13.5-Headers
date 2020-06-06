/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICAccessibilityExtras.h>
#import <libobjc.A.dylib/ICAnalyticsReporterAccessibilityDelegate.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras, ICAnalyticsReporterAccessibilityDelegate>
+(id)sharedInstance;
-(void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3 ;
-(BOOL)needsAccessibilityElements;
-(BOOL)shouldPerformLoggingForVoiceOver;
-(BOOL)shouldPerformLoggingForSwitchControl;
@end

