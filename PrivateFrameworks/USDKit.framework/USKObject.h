/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class USKToken, USKObjectPath, NSDictionary;

@interface USKObject : NSObject {

	USKToken* _name;
	USKObjectPath* _path;

}

@property (nonatomic,retain,readonly) USKToken * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) USKObjectPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
-(USKToken *)name;
-(USKObjectPath *)path;
-(NSDictionary *)metadata;
@end

