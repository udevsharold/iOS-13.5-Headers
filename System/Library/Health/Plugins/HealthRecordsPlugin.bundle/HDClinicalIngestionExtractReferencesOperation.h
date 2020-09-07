/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDReferenceExtractionResult, NSError, NSArray;

@interface HDClinicalIngestionExtractReferencesOperation : HDClinicalIngestionPerAccountOperation {

	HDReferenceExtractionResult* _extractionResult;
	NSError* _resolutionError;
	NSArray* _FHIRResourceData;
	NSArray* _sourceResourceObjects;

}

@property (nonatomic,copy,readonly) NSArray * FHIRResourceData;                         //@synthesize FHIRResourceData=_FHIRResourceData - In the implementation block
@property (nonatomic,copy) NSArray * sourceResourceObjects;                             //@synthesize sourceResourceObjects=_sourceResourceObjects - In the implementation block
@property (nonatomic,copy) HDReferenceExtractionResult * extractionResult;              //@synthesize extractionResult=_extractionResult - In the implementation block
@property (nonatomic,copy) NSError * resolutionError;                                   //@synthesize resolutionError=_resolutionError - In the implementation block
-(void)main;
-(NSArray *)FHIRResourceData;
-(id)initWithTask:(id)arg1 account:(id)arg2 resourceData:(id)arg3 sourceResourceObjects:(id)arg4 nextOperation:(id)arg5 ;
-(HDReferenceExtractionResult *)extractionResult;
-(NSError *)resolutionError;
-(NSArray *)sourceResourceObjects;
-(void)setExtractionResult:(HDReferenceExtractionResult *)arg1 ;
-(void)setResolutionError:(NSError *)arg1 ;
-(void)setSourceResourceObjects:(NSArray *)arg1 ;
@end
