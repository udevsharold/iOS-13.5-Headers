/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IAMWebProcessDelegate <NSObject>
@required
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessJSODidReportEvent:(id)arg1;
-(void)webProcessJSODidCallPerformAction:(id)arg1 options:(id)arg2;
-(void)webProcessJSODidCallOpen:(id)arg1 options:(id)arg2;
-(void)webProcessJSODidCallClose;

@end

