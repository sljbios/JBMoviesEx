//
//  JBMovie.m
//  JBMoviesEx
//
//  Created by Steve Levin on 6/21/13.
//  Copyright (c) 2013 com.aaa. All rights reserved.
//

#import "JBMovie.h"

@interface JBMovie ()

@property (nonatomic, readwrite) UIImage * image;

@end

@implementation JBMovie


-(id)initWithTitle: (NSString *) title
    boxOfficeGross: (float) newBoxOfficeGross
         storyline: (NSString *) newStoryline {
    self = [super init];
    if(self) {
        self.title = title;
        self.storyline = newStoryline;
        self.boxOfficeGross = newBoxOfficeGross;
        NSString *imageName = [self.title stringByAppendingPathExtension:@"jpg"];
        self.image = [UIImage imageNamed:imageName];
        
    }
    return self;
}

@end
