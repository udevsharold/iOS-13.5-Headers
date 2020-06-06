/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPSandboxingURLWrapper, NSUUID, NSURL, NSString;

@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding> {

	FPSandboxingURLWrapper* _urlWrapper;
	FPSandboxingURLWrapper* _directoryURLWrapper;
	NSUUID* _uuid;
	unsigned long long _version;

}

@property (nonatomic,retain) FPSandboxingURLWrapper * urlWrapper;                       //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * directoryURLWrapper;              //@synthesize directoryURLWrapper=_directoryURLWrapper - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * createdContainerTemporaryURL; 
@property (nonatomic,readonly) NSString * outputURLContentType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSURL *)url;
-(NSUUID *)uuid;
-(FPSandboxingURLWrapper *)urlWrapper;
-(void)setUrlWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)removeFromDisk;
-(BOOL)containerStillExists;
-(NSString *)outputURLContentType;
-(id)initWithEditedCopyURL:(id)arg1 createdContainerTemporaryURL:(id)arg2 ;
-(id)initWithEditedCopyURL:(id)arg1 ;
-(NSURL *)createdContainerTemporaryURL;
-(void)bumpVersion;
-(FPSandboxingURLWrapper *)directoryURLWrapper;
-(void)setDirectoryURLWrapper:(FPSandboxingURLWrapper *)arg1 ;
@end

