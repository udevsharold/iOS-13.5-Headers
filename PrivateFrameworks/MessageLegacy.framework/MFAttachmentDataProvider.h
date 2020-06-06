/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface MFAttachmentDataProvider : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)dataProviderWithURL:(id)arg1 ;
+(id)dataProviderWithPath:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)data;
-(NSURL *)url;
-(id)_path;
-(BOOL)save:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)exists;
-(BOOL)_isFileURL;
-(id)_fileAttributes:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

