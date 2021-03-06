/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NSUserActivity, NSString;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {

	NSUserActivity* _activity;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userActivityWasContinued:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)startScan;
-(void)fireCompletionHandler;
@end

