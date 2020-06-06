/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSCoreMLInterface, PRSDirectivesManager, NSString;

@interface PRSModelContext : NSObject {

	unsigned long long _type;
	SSCoreMLInterface* _model;
	PRSDirectivesManager* _directivesManager;
	NSString* _version;

}

@property (assign,nonatomic) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SSCoreMLInterface * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) PRSDirectivesManager * directivesManager;              //@synthesize directivesManager=_directivesManager - In the implementation block
@property (nonatomic,retain) NSString * version;                                    //@synthesize version=_version - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(SSCoreMLInterface *)model;
-(void)setModel:(SSCoreMLInterface *)arg1 ;
-(void)setDirectivesManager:(PRSDirectivesManager *)arg1 ;
-(id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3 ;
-(PRSDirectivesManager *)directivesManager;
@end

