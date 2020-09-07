/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (assign,nonatomic) int downloadFeeAgreementStatus; 
@property (assign,nonatomic) int termsAndConditionsAgreementStatus; 
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride; 
@property (assign,getter=isAutoDownload,nonatomic) BOOL autoDownload; 
@property (assign,getter=isDownloadOnly,nonatomic) BOOL downloadOnly; 
-(id)initWithMetadata:(id)arg1 ;
-(void)applyDownloadPolicy:(id)arg1 ;
@end
