/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@interface TUICandidateLine : UICollectionReusableView {

	id<TUICandidateViewStyle> _style;

}

@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
+(id)reuseIdentifier;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end
