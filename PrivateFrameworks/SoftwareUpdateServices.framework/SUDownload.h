/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SUOperationProgress *)progress;
-(void)setMetadata:(SUDownloadMetadata *)arg1 ;
-(SUDownloadMetadata *)metadata;
-(SUDescriptor *)descriptor;
-(void)setProgress:(SUOperationProgress *)arg1 ;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(BOOL)allowCellularDownload;
-(unsigned long long)totalSpaceConsumed;
-(BOOL)isValidDownload;
@end

