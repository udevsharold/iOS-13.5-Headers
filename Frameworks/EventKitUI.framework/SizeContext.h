/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SizeContext : NSObject {

	NSMutableArray* _windowContextStack;

}
+(id)sharedInstance;
-(id)init;
-(void)pushContextWithWindow:(id)arg1 ;
-(void)popContextFromWindow:(id)arg1 ;
-(id)windowForCurrentContext;
-(BOOL)hasWindowForCurrentContext;
@end

