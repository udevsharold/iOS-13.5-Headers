/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXTangierControllerDelegate <NSObject>
@optional
-(void)tangierControllerDidScroll:(id)arg1;
-(void)tangierControllerWillStartScrolling:(id)arg1;
-(void)tangierControllerDidStopScrolling:(id)arg1;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;

@end

