/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSRecognitionResult;

@interface VDDisambiguationAddressBookContext : NSObject {

	BOOL _resultFound;
	int _previousNameProperty;
	NSString* _previousName;
	NSString* _matchedName;
	VSRecognitionResult* _result;

}

@property (assign) int previousNameProperty;                            //@synthesize previousNameProperty=_previousNameProperty - In the implementation block
@property (nonatomic,retain) NSString * previousName;                   //@synthesize previousName=_previousName - In the implementation block
@property (nonatomic,retain) NSString * matchedName;                    //@synthesize matchedName=_matchedName - In the implementation block
@property (nonatomic,retain) VSRecognitionResult * result;              //@synthesize result=_result - In the implementation block
@property (assign) BOOL resultFound;                                    //@synthesize resultFound=_resultFound - In the implementation block
-(VSRecognitionResult *)result;
-(void)setResult:(VSRecognitionResult *)arg1 ;
-(int)previousNameProperty;
-(void)setPreviousNameProperty:(int)arg1 ;
-(NSString *)previousName;
-(void)setPreviousName:(NSString *)arg1 ;
-(NSString *)matchedName;
-(void)setMatchedName:(NSString *)arg1 ;
-(BOOL)resultFound;
-(void)setResultFound:(BOOL)arg1 ;
@end

