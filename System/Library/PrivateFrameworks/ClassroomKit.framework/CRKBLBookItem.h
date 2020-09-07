/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRKBLBookItem : NSObject {

	NSString* _title;
	NSString* _author;
	NSString* _path;
	NSString* _storeIdentifier;
	NSString* _identifier;
	NSString* _legacyUniqueIdentifier;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * legacyUniqueIdentifier;              //@synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)identifier;
-(NSString *)path;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setLegacyUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)legacyUniqueIdentifier;
@end
