/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserOperation.h>

@class EKChangeTracker;

@interface CUIKRevertOperation : CUIKUserOperation {

	EKChangeTracker* _originalChangeTracker;

}

@property (retain) EKChangeTracker * originalChangeTracker;              //@synthesize originalChangeTracker=_originalChangeTracker - In the implementation block
-(EKChangeTracker *)originalChangeTracker;
-(void)setOriginalChangeTracker:(EKChangeTracker *)arg1 ;
@end

