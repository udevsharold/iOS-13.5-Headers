/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVStreamDataParserOutputHandling <NSObject>
@optional
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(BOOL)arg3;
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
-(void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;

@end

