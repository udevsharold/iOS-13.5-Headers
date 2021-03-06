/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell {

	BOOL _editing;
	UIImageView* _checkmarkView;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                //@synthesize checkmarkView=_checkmarkView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
@end

