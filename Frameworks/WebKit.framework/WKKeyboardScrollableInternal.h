/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKKeyboardScrollableInternal <NSObject>
@required
-(CGPoint*)contentOffset;
-(void)didFinishScrolling;
-(BOOL)isKeyboardScrollable;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
-(RectEdges<bool>*)rubberbandableDirections;
-(CGPoint*)boundedContentOffset:(CGPoint)arg1;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1;
-(CGSize*)interactiveScrollVelocity;
-(RectEdges<bool>*)scrollableDirectionsFromOffset:(CGPoint)arg1;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2;

@end

