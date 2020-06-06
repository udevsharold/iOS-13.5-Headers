/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAutoscrollContainer
@property (assign,nonatomic) CGPoint autoscrollContentOffset; 
@property (assign,nonatomic) BOOL shouldAutoscroll; 
@optional
-(BOOL)shouldAutoscroll;
-(void)setShouldAutoscroll:(BOOL)arg1;

@required
-(CGRect*)contentFrameForView:(id)arg1;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1;

@end

