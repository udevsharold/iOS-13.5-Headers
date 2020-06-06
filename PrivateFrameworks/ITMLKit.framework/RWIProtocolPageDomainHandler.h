/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolPageDomainHandler <NSObject>
@optional
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)reloadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ignoreCache:(BOOL*)arg3 revalidateAllResources:(BOOL*)arg4;
-(void)navigateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3;
-(void)overrideUserAgentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 value:(id*)arg3;
-(void)overrideSettingWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 setting:(long long)arg3 value:(BOOL*)arg4;
-(void)getCookiesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)deleteCookieWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 cookieName:(id)arg3 url:(id)arg4;
-(void)getResourceTreeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getResourceContentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4;
-(void)setBootstrapScriptWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 source:(id*)arg3;
-(void)searchInResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(BOOL*)arg6 isRegex:(BOOL*)arg7 requestId:(id*)arg8;
-(void)searchInResourcesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 text:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5;
-(void)setShowRulersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 result:(BOOL)arg3;
-(void)setShowPaintRectsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 result:(BOOL)arg3;
-(void)setEmulatedMediaWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 media:(id)arg3;
-(void)setForcedAppearanceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 appearance:(long long)arg3;
-(void)snapshotNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)snapshotRectWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;
-(void)archiveWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;

@end

