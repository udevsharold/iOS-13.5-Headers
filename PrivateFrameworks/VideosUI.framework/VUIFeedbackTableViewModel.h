/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUILabel, NSArray;

@interface VUIFeedbackTableViewModel : NSObject {

	VUILabel* _headerTextView;
	NSArray* _descriptionTextView;

}

@property (nonatomic,retain) VUILabel * headerTextView;                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (nonatomic,retain) NSArray * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(void)setHeaderTextView:(VUILabel *)arg1 ;
-(VUILabel *)headerTextView;
-(NSArray *)descriptionTextView;
-(void)setDescriptionTextView:(NSArray *)arg1 ;
@end

