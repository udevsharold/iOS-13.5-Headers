/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPURLOperationLocator : FPActionOperationLocator {

	BOOL _attachSandboxExtensionOnXPCEncoding;
	long long _size;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(unsigned long long)size;
-(id)filename;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(id)parentIdentifier;
-(BOOL)isExternalURL;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
@end

