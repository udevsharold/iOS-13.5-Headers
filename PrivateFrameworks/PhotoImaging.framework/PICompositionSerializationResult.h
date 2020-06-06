/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject {

	NSData* _data;
	NSString* _formatIdentifier;
	NSString* _formatVersion;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)formatVersion;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatIdentifier;
-(void)setFormatIdentifier:(NSString *)arg1 ;
@end

