/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BCSAWDLogger : NSObject
+(id)sharedLogger;
-(void)logBarcodeActivatedEventForAction:(id)arg1 ;
-(int)_awdBarcodeClientType;
-(int)_awdBarcodeSourceTypeForAction:(id)arg1 ;
-(int)_awdBarcodeDataTypeFromAction:(id)arg1 ;
-(int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1 ;
-(int)_awdBarcodeURLTypeFromURLAction:(id)arg1 ;
-(int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)arg1 ;
-(id)barcodeDetectedEventForAction:(id)arg1 ;
-(void)logBarcodeDetectedEvent:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)logBarcodePreviewedEventForContentType:(long long)arg1 ;
@end

