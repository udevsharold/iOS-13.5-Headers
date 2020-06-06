/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)_isPlaceholderViewSelector;
-(UIView *)placeheldView;
-(UIView *)associatedView;
-(void)setFallbackView:(id)arg1;
-(void)setAssociatedView:(id)arg1;
-(BOOL)refreshPlaceholder;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(UIView *)fallbackView;

@end

