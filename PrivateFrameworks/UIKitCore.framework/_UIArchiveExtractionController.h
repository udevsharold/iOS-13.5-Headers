/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface _UIArchiveExtractionController : NSObject {

	NSArray* _extractedContentAbsolutePaths;
	NSString* _sourceArchivePath;
	NSString* _destinationExtractionRootPath;
	NSString* _destinationContentProtectionType;
	NSString* _sourceArchiveExtractionRootPath;

}

@property (nonatomic,readonly) NSString * sourceArchivePath;                           //@synthesize sourceArchivePath=_sourceArchivePath - In the implementation block
@property (nonatomic,retain) NSString * destinationExtractionRootPath;                 //@synthesize destinationExtractionRootPath=_destinationExtractionRootPath - In the implementation block
@property (nonatomic,retain) NSString * destinationContentProtectionType;              //@synthesize destinationContentProtectionType=_destinationContentProtectionType - In the implementation block
@property (nonatomic,retain) NSString * sourceArchiveExtractionRootPath;               //@synthesize sourceArchiveExtractionRootPath=_sourceArchiveExtractionRootPath - In the implementation block
-(BOOL)_createDestinationRoot:(id*)arg1 ;
-(id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2 ;
-(BOOL)extractArchiveContent:(id*)arg1 ;
-(id)extractedContentAbsolutePathsMatchingPredicate:(/*^block*/id)arg1 ;
-(NSString *)sourceArchivePath;
-(NSString *)destinationExtractionRootPath;
-(void)setDestinationExtractionRootPath:(NSString *)arg1 ;
-(NSString *)destinationContentProtectionType;
-(void)setDestinationContentProtectionType:(NSString *)arg1 ;
-(NSString *)sourceArchiveExtractionRootPath;
-(void)setSourceArchiveExtractionRootPath:(NSString *)arg1 ;
@end

