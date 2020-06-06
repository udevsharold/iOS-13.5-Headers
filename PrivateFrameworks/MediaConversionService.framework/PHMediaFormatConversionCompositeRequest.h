/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)requiresFormatConversion;
-(void)didFinishProcessing;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)propagateRequestOptionsToSubrequests;
-(BOOL)areAllSubrequestsPreflighted;
-(id)compositeRequestCommonInitWithError:(id*)arg1 ;
@end

