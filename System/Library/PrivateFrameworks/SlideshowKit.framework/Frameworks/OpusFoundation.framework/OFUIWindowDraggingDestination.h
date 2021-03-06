/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIWindowDraggingDestination <NSObject>
@optional
-(CGRect*)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
-(unsigned long long)draggingDestinationUpdated:(id)arg1;
-(void)draggingDestinationExited:(id)arg1;
-(BOOL)prepareForDragOperation:(id)arg1;
-(BOOL)performDragOperation:(id)arg1;
-(void)concludeDragOperation:(id)arg1;
-(void)draggingDestinationWillEnd:(id)arg1 cancelled:(BOOL)arg2;
-(void)draggingDestinationEnded:(id)arg1 cancelled:(BOOL)arg2;

@required
-(unsigned long long)draggingDestinationEntered:(id)arg1;

@end

