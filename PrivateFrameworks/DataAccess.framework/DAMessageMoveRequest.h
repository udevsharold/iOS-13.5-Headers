/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMessageMoveRequest : NSObject {

	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
	id _context;

}

@property (nonatomic,copy) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * fromFolder;              //@synthesize fromFolder=_fromFolder - In the implementation block
@property (nonatomic,copy) NSString * toFolder;                //@synthesize toFolder=_toFolder - In the implementation block
@property (nonatomic,retain) id context;                       //@synthesize context=_context - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 ;
-(void)setFromFolder:(NSString *)arg1 ;
-(void)setToFolder:(NSString *)arg1 ;
-(NSString *)fromFolder;
-(NSString *)toFolder;
@end

