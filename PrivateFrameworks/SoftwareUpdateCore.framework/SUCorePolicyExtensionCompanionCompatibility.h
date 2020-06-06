/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSNumber;

@interface SUCorePolicyExtensionCompanionCompatibility : NSObject <SUCorePolicyExtensionProtocol> {

	NSNumber* _minCompatibility;
	NSNumber* _maxCompatibility;

}

@property (nonatomic,retain) NSNumber * minCompatibility;              //@synthesize minCompatibility=_minCompatibility - In the implementation block
@property (nonatomic,retain) NSNumber * maxCompatibility;              //@synthesize maxCompatibility=_maxCompatibility - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)summary;
-(id)extensionName;
-(NSNumber *)minCompatibility;
-(NSNumber *)maxCompatibility;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentatitonMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
-(void)setMinCompatibility:(NSNumber *)arg1 ;
-(void)setMaxCompatibility:(NSNumber *)arg1 ;
@end
