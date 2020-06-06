/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTSectionItemTransitionModel;
@interface AVTSectionItemTransition : AVTTransition {

	id<AVTSectionItemTransitionModel> _sectionItemTransitionModel;

}

@property (nonatomic,readonly) id<AVTSectionItemTransitionModel> sectionItemTransitionModel;              //@synthesize sectionItemTransitionModel=_sectionItemTransitionModel - In the implementation block
-(id)model;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(id<AVTSectionItemTransitionModel>)sectionItemTransitionModel;
-(void)performTransition;
@end

