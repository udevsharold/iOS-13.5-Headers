/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>
@optional
-(BOOL)controllerShouldFetchForContentsChange:(id)arg1;

@required
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;

@end
