/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPresentationObservationToken.h>

@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken {

	SBControlCenterController* _controlCenterController;

}

@property (nonatomic,readonly) SBControlCenterController * controlCenterController;              //@synthesize controlCenterController=_controlCenterController - In the implementation block
-(void)dealloc;
-(long long)state;
-(id)initWithControlCenterController:(id)arg1 ;
-(SBControlCenterController *)controlCenterController;
@end

